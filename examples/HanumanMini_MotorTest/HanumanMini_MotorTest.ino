/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    /\      |====\   =======  |====\     /====\    |\    |                /\       /====\       /\       |=====\    /======   |\    /|   \     / 
   /  \     |     |     |     |     |   /      \   | \   |               /  \     /            /  \      |      |   |         | \  / |    \   / 
  /====\    |====/      |     |====/    |      |   |  \  |              /====\    |           /====\     |      |   |======   |  \/  |     \ / 
 /      \   |    \      |     |    \    \      /   |   \ |             /      \   \          /      \    |      |   |         |      |      |   
/        \  |     \     |     |     \    \====/    |    \|            /        \   \====/   /        \   |=====/    \======   |      |      |  

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ARTRON ACADEMY    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//fd(speedL-R);             forward speed 2 motor : -100 - 100


//fd2(speedL, speedR);      forward ----->motorL speed : -100 - 100
//                                    |
//                                    |-->motorR speed : -100 - 100


//bk(speedL-R);             backward speed 2 motor : -100 - 100


//bk2(speedL, speedR);      backward ----->motorL speed : -100 - 100
//                                    |
//                                    |-->motorR speed : -100 - 100


//sl(speedL-R);             spin left speed : -100 - 100


//sr(speedL-R);             spin right speed : -100 - 100


//ao();                     stop motor

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <HanumanMini.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  fd(100);       // forward 2 motor
  delay(1000);

  bk(100);       // backward 2 motor
  delay(1000); 

  sl(100);       // spin left 
  delay(1000);
  
  sr(100);       // spin right
  delay(1000);
  
  fd2(100, 100); // forward Speed_L, Speed_R
  delay(1000);
  
  bk2(100, 100); // backward Speed_L, Speed_R
  delay(1000);
  
  ao();          // Stop
  delay(1000);
}
