/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    /\      |====\   =======  |====\     /====\    |\    |                /\       /====\       /\       |=====\    /======   |\    /|   \     / 
   /  \     |     |     |     |     |   /      \   | \   |               /  \     /            /  \      |      |   |         | \  / |    \   / 
  /====\    |====/      |     |====/    |      |   |  \  |              /====\    |           /====\     |      |   |======   |  \/  |     \ / 
 /      \   |    \      |     |    \    \      /   |   \ |             /      \   \          /      \    |      |   |         |      |      |   
/        \  |     \     |     |     \    \====/    |    \|            /        \   \====/   /        \   |=====/    \======   |      |      |  
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// analogRead(pin);         read ------> analog pin (0 - 7)

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <HanumanMini.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  int pinA0 = analogRead(0);  // Read analog pin A0
  Serial.print("pinA0 : ");
  Serial.print(pinA0);
  Serial.print("   ");
  
  int pinA1 = analogRead(1);  // Read analog pin A1
  Serial.print("pinA1 : ");
  Serial.print(pinA1);
  Serial.print("   ");
  
  int pinA2 = analogRead(2);  // Read analog pin A2
  Serial.print("pinA2 : ");
  Serial.print(pinA2);
  Serial.print("   ");
  
  int pinA3 = analogRead(3);  // Read analog pin A3
  Serial.print("pinA3 : ");
  Serial.print(pinA3);
  Serial.print("   ");
  
  int pinA4 = analogRead(4);  // Read analog pin A4
  Serial.print("pinA4 : ");
  Serial.print(pinA4);
  Serial.print("   ");
  
  int pinA5 = analogRead(5);  // Read analog pin A5
  Serial.print("pinA5 : ");
  Serial.print(pinA5);
  Serial.print("   ");
  
  int pinA6 = analogRead(6);  // Read analog pin A6
  Serial.print("pinA6 : ");
  Serial.print(pinA6);
  Serial.print("   ");
  
  int pinA7 = analogRead(7);  // Read analog pin A7
  Serial.print("pinA7 : ");
  Serial.println(pinA7);
}
