//include the library
#include <CapacitiveSensor.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

//define the digital pin that the LED strip is connected to
#define PIN1 9
//#define PIN2 38
//#define PIN3 34
//#define PIN4 30
//#define PIN5 13

//the first parameter is the number of LEDs you have - change for your strip
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(15, PIN1, NEO_GRB + NEO_KHZ800); // r1
//Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(1, PIN2, NEO_GRB + NEO_KHZ800); // r2
//Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(1, PIN3, NEO_GRB + NEO_KHZ800); // r3
//Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(1, PIN4, NEO_GRB + NEO_KHZ800); // r4
//Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(1, PIN5, NEO_GRB + NEO_KHZ800); // r5

//pin 2 is SEND pin - common for all | cs_commonPin#_touchPin
CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52);
CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53);
CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50);
CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51);
CapacitiveSensor cs_3_48 = CapacitiveSensor(3, 48);
CapacitiveSensor cs_3_49 = CapacitiveSensor(3, 49);
CapacitiveSensor cs_3_46 = CapacitiveSensor(3, 46);
CapacitiveSensor cs_3_47 = CapacitiveSensor(3, 47);
CapacitiveSensor cs_4_44 = CapacitiveSensor(4, 44);
CapacitiveSensor cs_4_45 = CapacitiveSensor(4, 45);
CapacitiveSensor cs_4_42 = CapacitiveSensor(4, 42);
CapacitiveSensor cs_4_43 = CapacitiveSensor(4, 43);
CapacitiveSensor cs_5_40 = CapacitiveSensor(5, 40);
CapacitiveSensor cs_6_23 = CapacitiveSensor(6, 23);
CapacitiveSensor cs_6_22 = CapacitiveSensor(6, 22);
CapacitiveSensor cs_6_25 = CapacitiveSensor(6, 25);
CapacitiveSensor cs_6_24 = CapacitiveSensor(6, 24);
CapacitiveSensor cs_7_27 = CapacitiveSensor(7, 27);
CapacitiveSensor cs_7_26 = CapacitiveSensor(7, 26);
CapacitiveSensor cs_7_29 = CapacitiveSensor(7, 29);
CapacitiveSensor cs_7_28 = CapacitiveSensor(7, 28);
CapacitiveSensor cs_8_31 = CapacitiveSensor(8, 31);
CapacitiveSensor cs_8_30 = CapacitiveSensor(8, 30);
CapacitiveSensor cs_8_33 = CapacitiveSensor(8, 33);
CapacitiveSensor cs_8_32 = CapacitiveSensor(8, 32);

// variables
int ledPin1 =  9; // the number of the LED pin
//int ledPin2 =  38; // the number of the LED pin
//int ledPin3 =  34; // the number of the LED pin
//int ledPin4 =  30; // the number of the LED pin
//int ledPin5 =  13; // the number of the LED pin

void setup() {
  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(ledPin3, OUTPUT);
//  pinMode(ledPin4, OUTPUT);
//  pinMode(ledPin5, OUTPUT);

  strip1.begin(); //we always need to do this
  strip1.show(); // Initialize all pixels to 'off'
//  strip2.begin(); //we always need to do this
//  strip2.show(); // Initialize all pixels to 'off'
//  strip3.begin(); //we always need to do this
//  strip3.show(); // Initialize all pixels to 'off'
//  strip4.begin(); //we always need to do this
//  strip4.show(); // Initialize all pixels to 'off'
////  strip5.begin(); //we always need to do this
//  strip5.show(); // Initialize all pixels to 'off'

  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // sensor stuff cs_commonPin#_touchPin#
  long capSense1 =  cs_2_52.capacitiveSensor(30); // r1c5
  long capSense2 =  cs_2_53.capacitiveSensor(30); // r1c4
  long capSense3 =  cs_2_50.capacitiveSensor(30); // r2c5
  long capSense4 =  cs_2_51.capacitiveSensor(30); // r2c4
  long capSense5 =  cs_3_48.capacitiveSensor(30); // r3c5
  long capSense6 =  cs_3_49.capacitiveSensor(30); // r3c4
  long capSense7 =  cs_3_46.capacitiveSensor(30); // r4c5
  long capSense8 =  cs_3_47.capacitiveSensor(30); // r4c4
  long capSense9 =  cs_4_44.capacitiveSensor(30); // r5c5
  long capSense10 =  cs_4_45.capacitiveSensor(30); // r5c4
  long capSense11 =  cs_4_42.capacitiveSensor(30); // r3c3
  long capSense12 =  cs_4_43.capacitiveSensor(30); // r4c3
  long capSense13 =  cs_5_40.capacitiveSensor(30); // r5c3
  long capSense14 =  cs_6_23.capacitiveSensor(30); // r2c3
  long capSense15 =  cs_6_22.capacitiveSensor(30); // r1c3
  long capSense16 =  cs_6_25.capacitiveSensor(30); // r1c2
  long capSense17 =  cs_6_24.capacitiveSensor(30); // r1c1
  long capSense18 =  cs_7_27.capacitiveSensor(30); // r2c2
  long capSense19 =  cs_7_26.capacitiveSensor(30); // r2c1
  long capSense20 =  cs_7_29.capacitiveSensor(30); // r3c2
  long capSense21 =  cs_7_28.capacitiveSensor(30); // r3c1
  long capSense22 =  cs_8_31.capacitiveSensor(30); // r4c2
  long capSense23 =  cs_8_30.capacitiveSensor(30); // r4c1
  long capSense24 =  cs_8_33.capacitiveSensor(30); // r5c2
  long capSense25 =  cs_8_32.capacitiveSensor(30); // r5c1

  // LED stuff
  // ROW 1
  if(capSense17 > 100) {
      strip1.setPixelColor(0, 255, 0, 0); //r
      strip1.setPixelColor(1, 255, 0, 0); //r
      strip1.setPixelColor(2, 255, 0, 0); //r
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=0; i<3; i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

  if(capSense16 > 100) {
      strip1.setPixelColor(3, 0, 255, 0); //g
      strip1.setPixelColor(4, 0, 255, 0); //g
      strip1.setPixelColor(5, 0, 255, 0); //g
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=3; i<6; i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

  if(capSense15 > 100) {
      strip1.setPixelColor(6, 0, 0, 255); //b
      strip1.setPixelColor(7, 0, 0, 255); //b
      strip1.setPixelColor(8, 0, 0, 255); //b
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=6; i<9; i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

  if(capSense2 > 100) {
      strip1.setPixelColor(9, 255, 255, 255); //w
      strip1.setPixelColor(10, 255, 255, 255); //w
      strip1.setPixelColor(11, 255, 255, 255); //w
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=9; i<12; i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

  if(capSense1 > 100) {
      strip1.setPixelColor(12, 255, 255, 255); //w
      strip1.setPixelColor(13, 255, 255, 255); //w
      strip1.setPixelColor(14, 255, 255, 255); //w
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=12; i<15; i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

//  // ROW 2
//  if(capSense1 > 100) {
//      strip2.setPixelColor(0, 255, 0, 0); //r
//      strip2.setPixelColor(1, 255, 0, 0); //r
//      strip2.setPixelColor(2, 255, 0, 0); //r
//      strip2.setBrightness(50);
//      strip2.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=0; i<3; i++) {
//          strip2.setPixelColor(i, 0, 0, 0); //off!!!
//          strip2.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip2.setPixelColor(3, 0, 255, 0); //g
//      strip2.setPixelColor(4, 0, 255, 0); //g
//      strip2.setPixelColor(5, 0, 255, 0); //g
//      strip2.setBrightness(50);
//      strip2.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=3; i<6; i++) {
//          strip2.setPixelColor(i, 0, 0, 0); //off!!!
//          strip2.show();
//      }
//  }
//
//  if(capSense3 > 100) {
//      strip2.setPixelColor(6, 0, 0, 255); //b
//      strip2.setPixelColor(7, 0, 0, 255); //b
//      strip2.setPixelColor(8, 0, 0, 255); //b
//      strip2.setBrightness(50);
//      strip2.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=6; i<9; i++) {
//          strip2.setPixelColor(i, 0, 0, 0); //off!!!
//          strip2.show();
//      }
//  }
//
//  if(capSense1 > 100) {
//      strip2.setPixelColor(9, 255, 255, 255); //w
//      strip2.setPixelColor(10, 255, 255, 255); //w
//      strip2.setPixelColor(11, 255, 255, 255); //w
//      strip2.setBrightness(50);
//      strip2.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=9; i<12; i++) {
//          strip2.setPixelColor(i, 0, 0, 0); //off!!!
//          strip2.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip2.setPixelColor(12, 255, 255, 255); //w
//      strip2.setPixelColor(13, 255, 255, 255); //w
//      strip2.setPixelColor(14, 255, 255, 255); //w
//      strip2.setBrightness(50);
//      strip2.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=12; i<15; i++) {
//          strip2.setPixelColor(i, 0, 0, 0); //off!!!
//          strip2.show();
//      }
//  }
//
//  // ROW 3
//  if(capSense1 > 100) {
//      strip3.setPixelColor(0, 255, 0, 0); //r
//      strip3.setPixelColor(1, 255, 0, 0); //r
//      strip3.setPixelColor(2, 255, 0, 0); //r
//      strip3.setBrightness(50);
//      strip3.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=0; i<3; i++) {
//          strip3.setPixelColor(i, 0, 0, 0); //off!!!
//          strip3.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip3.setPixelColor(3, 0, 255, 0); //g
//      strip3.setPixelColor(4, 0, 255, 0); //g
//      strip3.setPixelColor(5, 0, 255, 0); //g
//      strip3.setBrightness(50);
//      strip3.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=3; i<6; i++) {
//          strip3.setPixelColor(i, 0, 0, 0); //off!!!
//          strip3.show();
//      }
//  }
//
//  if(capSense3 > 100) {
//      strip3.setPixelColor(6, 0, 0, 255); //b
//      strip3.setPixelColor(7, 0, 0, 255); //b
//      strip3.setPixelColor(8, 0, 0, 255); //b
//      strip3.setBrightness(50);
//      strip3.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=6; i<9; i++) {
//          strip3.setPixelColor(i, 0, 0, 0); //off!!!
//          strip3.show();
//      }
//  }
//
//  if(capSense1 > 100) {
//      strip3.setPixelColor(9, 255, 255, 255); //w
//      strip3.setPixelColor(10, 255, 255, 255); //w
//      strip3.setPixelColor(11, 255, 255, 255); //w
//      strip3.setBrightness(50);
//      strip3.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=9; i<12; i++) {
//          strip3.setPixelColor(i, 0, 0, 0); //off!!!
//          strip3.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip3.setPixelColor(12, 255, 255, 255); //w
//      strip3.setPixelColor(13, 255, 255, 255); //w
//      strip3.setPixelColor(14, 255, 255, 255); //w
//      strip3.setBrightness(50);
//      strip3.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=12; i<15; i++) {
//          strip3.setPixelColor(i, 0, 0, 0); //off!!!
//          strip3.show();
//      }
//  }
//
//  // ROW 4
//  if(capSense1 > 100) {
//      strip4.setPixelColor(0, 255, 0, 0); //r
//      strip4.setPixelColor(1, 255, 0, 0); //r
//      strip4.setPixelColor(2, 255, 0, 0); //r
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=0; i<3; i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip4.setPixelColor(3, 0, 255, 0); //g
//      strip4.setPixelColor(4, 0, 255, 0); //g
//      strip4.setPixelColor(5, 0, 255, 0); //g
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=3; i<6; i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
//
//  if(capSense3 > 100) {
//      strip4.setPixelColor(6, 0, 0, 255); //b
//      strip4.setPixelColor(7, 0, 0, 255); //b
//      strip4.setPixelColor(8, 0, 0, 255); //b
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=6; i<9; i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
//
//  if(capSense1 > 100) {
//      strip4.setPixelColor(9, 255, 255, 255); //w
//      strip4.setPixelColor(10, 255, 255, 255); //w
//      strip4.setPixelColor(11, 255, 255, 255); //w
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=9; i<12; i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip4.setPixelColor(12, 255, 255, 255); //w
//      strip4.setPixelColor(13, 255, 255, 255); //w
//      strip4.setPixelColor(14, 255, 255, 255); //w
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=12; i<15; i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
//
//  // ROW 5
//  if(capSense1 > 100) {
//      strip5.setPixelColor(0, 255, 0, 0); //r
//      strip5.setPixelColor(1, 255, 0, 0); //r
//      strip5.setPixelColor(2, 255, 0, 0); //r
//      strip5.setBrightness(50);
//      strip5.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=0; i<3; i++) {
//          strip5.setPixelColor(i, 0, 0, 0); //off!!!
//          strip5.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip5.setPixelColor(3, 0, 255, 0); //g
//      strip5.setPixelColor(4, 0, 255, 0); //g
//      strip5.setPixelColor(5, 0, 255, 0); //g
//      strip5.setBrightness(50);
//      strip5.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=3; i<6; i++) {
//          strip5.setPixelColor(i, 0, 0, 0); //off!!!
//          strip5.show();
//      }
//  }
//
//  if(capSense3 > 100) {
//      strip5.setPixelColor(6, 0, 0, 255); //b
//      strip5.setPixelColor(7, 0, 0, 255); //b
//      strip5.setPixelColor(8, 0, 0, 255); //b
//      strip5.setBrightness(50);
//      strip5.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=6; i<9; i++) {
//          strip5.setPixelColor(i, 0, 0, 0); //off!!!
//          strip5.show();
//      }
//  }
//
//  if(capSense1 > 100) {
//      strip5.setPixelColor(9, 255, 255, 255); //w
//      strip5.setPixelColor(10, 255, 255, 255); //w
//      strip5.setPixelColor(11, 255, 255, 255); //w
//      strip5.setBrightness(50);
//      strip5.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=9; i<12; i++) {
//          strip5.setPixelColor(i, 0, 0, 0); //off!!!
//          strip5.show();
//      }
//  }
//
//  if(capSense2 > 100) {
//      strip5.setPixelColor(12, 255, 255, 255); //w
//      strip5.setPixelColor(13, 255, 255, 255); //w
//      strip5.setPixelColor(14, 255, 255, 255); //w
//      strip5.setBrightness(50);
//      strip5.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=12; i<15; i++) {
//          strip5.setPixelColor(i, 0, 0, 0); //off!!!
//          strip5.show();
//      }
//  }

  // serial monitor code
  Serial.print(capSense1); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense2); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense3); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense4); //print raw sensor value
  Serial.print("    ");
  Serial.print(capSense5);
  Serial.print("    ");
  Serial.print(capSense6);
  Serial.print("    ");
  Serial.print(capSense7);
  Serial.print("    ");
  Serial.print(capSense8);
  Serial.print("    ");
  Serial.print(capSense9);
  Serial.print("    ");
  Serial.print(capSense10);
  Serial.print("    ");
  Serial.print(capSense11);
  Serial.print("    ");
  Serial.print(capSense12);
  Serial.print("    ");
  Serial.println(capSense13);
  Serial.print("    ");
  Serial.print(capSense14);
  Serial.print("    ");
  Serial.print(capSense15);
  Serial.print("    ");
  Serial.print(capSense16);
  Serial.print("    ");
  Serial.print(capSense17);
  Serial.print("    ");
  Serial.print(capSense18);
  Serial.print("    ");
  Serial.print(capSense19);
  Serial.print("    ");
  Serial.print(capSense20);
  Serial.print("    ");
  Serial.print(capSense21);
  Serial.print("    ");
  Serial.print(capSense22);
  Serial.print("    ");
  Serial.print(capSense23);
  Serial.print("    ");
  Serial.print(capSense24);
  Serial.print("    ");
  Serial.println(capSense25);

  delay(30); // arbitrary delay to limit data to serial port
}
