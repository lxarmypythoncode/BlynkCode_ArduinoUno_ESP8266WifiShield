#include <SoftwareSerial.h>

SoftwareSerial myserial(10, 11); // RX, TX

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  myserial.begin(9600);
}

void loop() {
  if (myserial.available()) {
    Serial.write(myserial.read());
  }
  if (Serial.available()) {
    myserial.write(Serial.read());
  }
}
