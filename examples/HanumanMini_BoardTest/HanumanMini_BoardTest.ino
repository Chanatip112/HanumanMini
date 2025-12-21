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
  if (SW()){
    fd(100);
    dalay(1000);
    bk(100);
    dalay(1000);
    sl(100);
    dalay(1000);
    sr(100);
    dalay(1000);
    ao();
  }

  Serial.print("A0 : ");
  Serial.print(analog(0));
  Serial.print("   A1 : ");
  Serial.print(analog(1));
  Serial.print("   A2 : ");
  Serial.print(analog(2));
  Serial.print("   A3 : ");
  Serial.print(analog(3));
  Serial.print("   A4 : ");
  Serial.print(analog(4));
  Serial.print("   A5 : ");
  Serial.print(analog(5));
  Serial.print("   A6 : ");
  Serial.print(analog(6));
  Serial.print("   A7 : ");
  Serial.print(analog(7));

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
