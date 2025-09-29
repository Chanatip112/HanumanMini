/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    /\      |====\   =======  |====\     /====\    |\    |                /\       /====\       /\       |=====\    /======   |\    /|   \     / 
   /  \     |     |     |     |     |   /      \   | \   |               /  \     /            /  \      |      |   |         | \  / |    \   / 
  /====\    |====/      |     |====/    |      |   |  \  |              /====\    |           /====\     |      |   |======   |  \/  |     \ / 
 /      \   |    \      |     |    \    \      /   |   \ |             /      \   \          /      \    |      |   |         |      |      |   
/        \  |     \     |     |     \    \====/    |    \|            /        \   \====/   /        \   |=====/    \======   |      |      |  

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// digitalRead(pin);        read ------> analog pin (A0 - A7)
//                                 |
//                                 |
//                                 |---> digital pin (9 - 13)

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <HanumanMini.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  int pinA0 = digitalRead(A0);  // Read digital pin A0
  Serial.print("pinA0 : ");
  Serial.print(pinA0);
  Serial.print("   ");
  
  int pinA1 = digitalRead(A1);  // Read digital pin A1
  Serial.print("pinA1 : ");
  Serial.print(pinA1);
  Serial.print("   ");
  
  int pinA2 = digitalRead(A2);  // Read digital pin A2
  Serial.print("pinA2 : ");
  Serial.print(pinA2);
  Serial.print("   ");
  
  int pinA3 = digitalRead(A3);  // Read digital pin A3
  Serial.print("pinA3 : ");
  Serial.print(pinA3);
  Serial.print("   ");
  
  int pinA4 = digitalRead(A4);  // Read digital pin A4
  Serial.print("pinA4 : ");
  Serial.print(pinA4);
  Serial.print("   ");
  
  int pinA5 = digitalRead(A5);  // Read digital pin A5
  Serial.print("pinA5 : ");
  Serial.print(pinA5);
  Serial.print("   ");
  
  int pinA6 = digitalRead(A6);  // Read digital pin A6
  Serial.print("pinA6 : ");
  Serial.print(pinA6);
  Serial.print("   ");
  
  int pinA7 = digitalRead(A7);  // Read digital pin A7
  Serial.print("pinA7 : ");
  Serial.print(pinA7);
  Serial.print("   ");
  
  int pinD9 = digitalRead(9);   // Read digital pin D9
  Serial.print("pinD9 : ");
  Serial.print(pinD9);
  Serial.print("   ");
  
  int pinD10 = digitalRead(10); // Read digital pin D10
  Serial.print("pinD10 : ");
  Serial.print(pinD10);
  Serial.print("   ");
  
  int pinD11 = digitalRead(11); // Read digital pin D11
  Serial.print("pinD11 : ");
  Serial.print(pinD11);
  Serial.print("   ");
  
  int pinD12 = digitalRead(12); // Read digital pin D12
  Serial.print("pinD12 : ");
  Serial.print(pinD12);
  Serial.print("   ");
  
  int pinD13 = digitalRead(13); // Read digital pin D13
  Serial.print("pinD13 : ");
  Serial.println(pinD13);
}
