#include <iostream>
#include <wiringPi.h>
#include <unistd.h>
using namespace std;
#define LED_GPIO 17
#define LED1_GPIO 4
#define BUTTON_GPIO 27
void lightLED(void){
static int x = 1;
cout << "Button pressed " << x++ << " times! LED on" << endl;
if(x == 2){
   digitalWrite(LED_GPIO, HIGH);
   digitalWrite(LED1_GPIO, HIGH);
}
else {
   digitalWrite(LED_GPIO, LOW);
   digitalWrite(LED1_GPIO, LOW);
   x = 1;
}
}
int main() {
wiringPiSetupGpio();

pinMode(LED_GPIO, OUTPUT);
pinMode(LED1_GPIO, OUTPUT);
pinMode(BUTTON_GPIO, INPUT);

digitalWrite (LED_GPIO, LOW);
digitalWrite (LED1_GPIO, LOW);

cout << "Press the button on GPIO "
<< BUTTON_GPIO << endl;
wiringPiISR(BUTTON_GPIO, INT_EDGE_RISING, &lightLED);
 return 0;
}
