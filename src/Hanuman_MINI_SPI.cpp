//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File	    :	Hanuman_MINI_SPI.cpp
 *	Release		:	v0.1
 *
 *	Created on	:	27 Dec 2025
 *		Author	:	Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "Hanuman_MINI_SPI.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool spi_adc::begin(uint8_t cs, SPIClass *theSPI) {
  hwSPI = true;

  this->cs = cs;

  pinMode(this->cs, OUTPUT);
  digitalWrite(this->cs, HIGH);
  _spi = theSPI;
  _spi->begin();
  /* SPI.begin(); */

  return true;
}

bool spi_adc::begin(uint8_t sck, uint8_t mosi, uint8_t miso,
                             uint8_t cs) {
  hwSPI = false;

  this->sck = sck;
  this->mosi = mosi;
  this->miso = miso;
  this->cs = cs;

  pinMode(this->sck, OUTPUT);
  pinMode(this->mosi, OUTPUT);
  pinMode(this->miso, INPUT);
  pinMode(this->cs, OUTPUT);

  digitalWrite(this->sck, LOW);
  digitalWrite(this->mosi, LOW);
  digitalWrite(this->cs, HIGH);

  return true;
}

int spi_adc::read(uint8_t channel) {
  if ((channel < 0) || (channel > 7))
    return -1;
  return SPIxADC(channel, false);
}

int spi_adc::SPIxADC(uint8_t channel, bool differential) {
  byte command, sgldiff;

  if (differential) {
    sgldiff = 0;
  } else {
    sgldiff = 1;
  }

  command = ((0x01 << 7) |             // start bit
             (sgldiff << 6) |          // single or differential
             ((channel & 0x07) << 3)); // channel number

  if (hwSPI) {
    byte b0, b1, b2;

    _spi->beginTransaction(
        SPISettings(MCP3208_SPI_MAX, MCP3208_SPI_ORDER, MCP3208_SPI_MODE));
    digitalWrite(cs, LOW);

    b0 = _spi->transfer(command);
    b1 = _spi->transfer(0x00);
    b2 = _spi->transfer(0x00);

    digitalWrite(cs, HIGH);
    _spi->endTransaction();

    return 0xFFF & ((b0 & 0x01) << 11 | (b1 & 0xFF) << 3 | (b2 & 0xE0) >> 5);

  } else {

    uint16_t outBuffer, inBuffer = 0;

    digitalWrite(cs, LOW);

    // 5 command bits + 1 null bit + 12 data bits = 18 bits
    outBuffer = command << 8;
    for (int c = 0; c < 18; c++) {
      digitalWrite(mosi, (outBuffer >> (15 - c)) & 0x01);
      digitalWrite(sck, HIGH);
      digitalWrite(sck, LOW);
      inBuffer <<= 1;
      if (digitalRead(miso))
        inBuffer |= 0x01;
    }

    digitalWrite(cs, HIGH);

    return inBuffer & 0xFFF;
  }
}