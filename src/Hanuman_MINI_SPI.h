//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File	    :	Hanuman_MINI_SPI.h
 *	Release		:	v0.1
 *
 *	Created on	:	27 Dec 2025
 *		Author	:	Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#ifndef Hanuman_MINI_SPI_H
#define Hanuman_MINI_SPI_H

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "hii.h"
#include "SPI.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#define MCP3208_SPI_MAX_5V 3600000         ///< SPI MAX Value on 5V pin
#define MCP3208_SPI_MAX_3V 1350000         ///< SPI MAX Value on 3V pin
#define MCP3208_SPI_MAX MCP3208_SPI_MAX_3V ///< SPI MAX Value
#define MCP3208_SPI_ORDER MSBFIRST         ///< SPI ORDER
#define MCP3208_SPI_MODE SPI_MODE0         ///< SPI MODE

class spi_adc
{
public:

    // SPI() : _cs(10) {}
    // SPI(uint8_t cs) : _cs(cs) {}
    bool begin(uint8_t cs = SS, SPIClass *theSPI = &SPI);
    bool begin(uint8_t sck, uint8_t mosi, uint8_t miso, uint8_t cs);
    int read(uint8_t channel);

private:
    uint8_t cs;
    uint8_t mosi;
    uint8_t miso;
    uint8_t sck;
    bool hwSPI;
    int SPIxADC(uint8_t channel, bool differential);
    SPIClass *_spi;
};


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#endif
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~