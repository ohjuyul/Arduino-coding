#include <Servo.h>
Servo myServo;
int dragon = 90;
void setup() {
myServo.attach(12);
}
void loop() {
for (dragon = 0; dragon <= 180; dragon += 1) {
myServo.write(dragon);
delay(15);
}
for (dragon = 180; dragon >= 0; dragon -= 1) { 
myServo.write(dragon);
delay(15);
} 
}