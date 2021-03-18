#include <wiringPi.h>
#include <iostream>
using namespace std;
#define LED_GPIO 17
int main() {
wiringPiSetupGpio();
cout << "Starting fast GPIO toggle on GPIO" << LED_GPIO << endl;
cout << "Press CTRL+C to quit..." << endl;
pinMode(LED_GPIO, OUTPUT);
while(1) {
digitalWrite(LED_GPIO, HIGH);
delay(1000);
digitalWrite(LED_GPIO, LOW);
delay(1000);
}
return 0;
}
