/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    /\      |====\   =======  |====\     /====\    |\    |                /\       /====\       /\       |=====\    /======   |\    /|   \     / 
   /  \     |     |     |     |     |   /      \   | \   |               /  \     /            /  \      |      |   |         | \  / |    \   / 
  /====\    |====/      |     |====/    |      |   |  \  |              /====\    |           /====\     |      |   |======   |  \/  |     \ / 
 /      \   |    \      |     |    \    \      /   |   \ |             /      \   \          /      \    |      |   |         |      |      |   
/        \  |     \     |     |     \    \====/    |    \|            /        \   \====/   /        \   |=====/    \======   |      |      |  
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <HanumanMini.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (SW_OK()){
    fd(100);
    delay(1000);
    bk(100);
    delay(1000);
    sl(100);
    delay(1000);
    sr(100);
    delay(1000);
    ao();
  }

  Serial.print("A0 : ");
  Serial.print(analogRead(0));
  Serial.print("   A1 : ");
  Serial.print(analogRead(1));
  Serial.print("   A2 : ");
  Serial.print(analogRead(2));
  Serial.print("   A3 : ");
  Serial.print(analogRead(3));
  Serial.print("   A4 : ");
  Serial.print(analogRead(4));
  Serial.print("   A5 : ");
  Serial.print(analogRead(5));
  Serial.print("   A6 : ");
  Serial.print(analogRead(6));
  Serial.print("   A7 : ");
  Serial.print(analogRead(7));

  Serial.print("   D9 : ");
  Serial.print(digitalRead(9));
  Serial.print("   D10 : ");
  Serial.print(digitalRead(10));
  Serial.print("   D11 : ");
  Serial.print(digitalRead(11));
  Serial.print("   D12 : ");
  Serial.print(digitalRead(12));
  Serial.print("   D13 : ");
  Serial.println(digitalRead(13));
}
