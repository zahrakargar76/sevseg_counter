#include <SevSeg.h>
SevSeg sevseg;

void setup() {
  // put your setup code here, to run once:
  // set to 1 for single digit display
  byte numDigits = 1;
  byte digitPins[] = {};
  //Defines ardunio pin connectiond in order:A,B,C,D,E,F,G
  byte segmentPins[] = { 3, 2, 8, 7, 6, 4, 5, 9 };
  bool resistorsOnSegments = true;
  //Initialize sevseg object. Uncomment second line if you use common cathode 7 segment
  sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Display numbers one by one with 2 seconds delay
  for (int i = 0; i < 10; i++) {
    sevseg.setNumber(i);
    sevseg.refreshDisplay();
    delay(2000);
  }
}
