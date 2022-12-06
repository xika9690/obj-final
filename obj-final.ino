//include the library
#include <CapacitiveSensor.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

//define the digital pin that the LED strip is connected to
#define PIN1 42
#define PIN2 38
#define PIN3 34
#define PIN4 30
//#define PIN5 13

//the first parameter is the number of LEDs you have - change for your strip
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(1, PIN1, NEO_GRB + NEO_KHZ800); // r1
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(1, PIN2, NEO_GRB + NEO_KHZ800); // r2
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(1, PIN3, NEO_GRB + NEO_KHZ800); // r3
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(1, PIN4, NEO_GRB + NEO_KHZ800); // r4
//Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(1, PIN5, NEO_GRB + NEO_KHZ800); // r5

//pin 2 is SEND pin - common for all | cs_commonPin#_touchPin
CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52); // r1c1
CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53); // r1c2
CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50); // r1c3
CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r1c4
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r1c5
//CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52); // r2c1
//CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53); // r2c2
//CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50); // r2c3
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r2c4
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r2c5
//CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52); // r3c1
//CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53); // r3c2
//CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50); // r3c3
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r3c4
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r3c5
//CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52); // r4c1
//CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53); // r4c2
//CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50); // r4c3
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r4c4
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r4c5
//CapacitiveSensor cs_2_52 = CapacitiveSensor(2, 52); // r5c1
//CapacitiveSensor cs_2_53 = CapacitiveSensor(2, 53); // r5c2
//CapacitiveSensor cs_2_50 = CapacitiveSensor(2, 50); // r5c3
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r5c4
//CapacitiveSensor cs_2_51 = CapacitiveSensor(2, 51); // r5c5

// variables
int ledPin1 =  42; // the number of the LED pin
int ledPin2 =  38; // the number of the LED pin
int ledPin3 =  34; // the number of the LED pin
int ledPin4 =  30; // the number of the LED pin
int ledPin5 =  13; // the number of the LED pin
//int potPin = A6; // brightness
//int potVal = 0; // save the value of potentiometer
//int potPin2 = A4; // color mode
//int potVal2 = 0; // save the value of potentiometer
//int brightness = 0;
//int colorMode = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

  strip1.begin(); //we always need to do this
  strip1.show(); // Initialize all pixels to 'off'
  strip2.begin(); //we always need to do this
  strip2.show(); // Initialize all pixels to 'off'
  strip3.begin(); //we always need to do this
  strip3.show(); // Initialize all pixels to 'off'
  strip4.begin(); //we always need to do this
  strip4.show(); // Initialize all pixels to 'off'
//  strip5.begin(); //we always need to do this
//  strip5.show(); // Initialize all pixels to 'off'

  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // sensor stuff cs_commonPin#_touchPin#
  long capSense1 =  cs_2_52.capacitiveSensor(30); // r1c1
  long capSense2 =  cs_2_53.capacitiveSensor(30); // r1c2
  long capSense3 =  cs_2_50.capacitiveSensor(30); // r1c3
  long capSense4 =  cs_2_51.capacitiveSensor(30); // r1c4
//  long capSense5 =  cs_2_3.capacitiveSensor(30); // r1c5
//  long capSense6 =  cs_2_4.capacitiveSensor(30); // r2c1
//  long capSense7 =  cs_2_5.capacitiveSensor(30); // r2c2
//  long capSense8 =  cs_2_6.capacitiveSensor(30); // r2c3
//  long capSense9 =  cs_2_3.capacitiveSensor(30); // r2c4
//  long capSense10 =  cs_2_4.capacitiveSensor(30); // r2c5
//  long capSense11 =  cs_2_5.capacitiveSensor(30); // r3c1
//  long capSense12 =  cs_2_6.capacitiveSensor(30); // r3c2
//  long capSense13 =  cs_2_3.capacitiveSensor(30); // r3c3
//  long capSense14 =  cs_2_4.capacitiveSensor(30); // r3c4
//  long capSense15 =  cs_2_5.capacitiveSensor(30); // r3c5
//  long capSense16 =  cs_2_6.capacitiveSensor(30); // r4c1
//  long capSense17 =  cs_2_3.capacitiveSensor(30); // r4c2
//  long capSense18 =  cs_2_4.capacitiveSensor(30); // r4c3
//  long capSense19 =  cs_2_5.capacitiveSensor(30); // r4c4
//  long capSense20 =  cs_2_6.capacitiveSensor(30); // r4c5
//  long capSense21 =  cs_2_3.capacitiveSensor(30); // r5c1
//  long capSense22 =  cs_2_4.capacitiveSensor(30); // r5c2
//  long capSense23 =  cs_2_5.capacitiveSensor(30); // r5c3
//  long capSense24 =  cs_2_6.capacitiveSensor(30); // r5c4
//  long capSense25 =  cs_2_6.capacitiveSensor(30); // r5c5

  // LED stuff
  if(capSense1 > 100) {
      strip1.setPixelColor(0, 255, 0, 0); //r
      strip1.setBrightness(50);
      strip1.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=0; i<strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 0, 0, 0); //off!!!
          strip1.show();
      }
  }

  if(capSense2 > 100) {
      strip2.setPixelColor(0, 0, 255, 0); //g
      strip2.setBrightness(50);
      strip2.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=0; i<strip2.numPixels(); i++) {
          strip2.setPixelColor(i, 0, 0, 0); //off!!!
          strip2.show();
      }
  }

  if(capSense3 > 100) {
      strip3.setPixelColor(0, 0, 0, 255); //b
      strip3.setBrightness(50);
      strip3.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=0; i<strip3.numPixels(); i++) {
          strip3.setPixelColor(i, 0, 0, 0); //off!!!
          strip3.show();
      }
  }

  if(capSense4 > 100) {
      strip4.setPixelColor(0, 255, 255, 255); //w
      strip4.setBrightness(50);
      strip4.show();
      }
  else {
      // turn LED off:
      for(uint16_t i=0; i<strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 0, 0, 0); //off!!!
          strip4.show();
      }
  }

//  if(capSense5 > 100) {
//      strip4.setPixelColor(0, 255, 255, 255); //w
//      strip4.setBrightness(50);
//      strip4.show();
//      }
//  else {
//      // turn LED off:
//      for(uint16_t i=0; i<strip4.numPixels(); i++) {
//          strip4.setPixelColor(i, 0, 0, 0); //off!!!
//          strip4.show();
//      }
//  }
  // serial monitor code
  Serial.print(capSense1); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense2); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense3); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.println(capSense4); //print raw sensor value
//  Serial.print("    ");
//  Serial.print(capSense5);
//  Serial.print("    ");
//  Serial.print(capSense6);
//  Serial.print("    ");
//  Serial.print(capSense7);
//  Serial.print("    ");
//  Serial.print(capSense8);
//  Serial.print("    ");
//  Serial.print(capSense9);
//  Serial.print("    ");
//  Serial.print(capSense10);
//  Serial.print("    ");
//  Serial.print(capSense11);
//  Serial.print("    ");
//  Serial.print(capSense12);
//  Serial.print("    ");
//  Serial.print(capSense13);
//  Serial.print("    ");
//  Serial.print(capSense14);
//  Serial.print("    ");
//  Serial.print(capSense15);
//  Serial.print("    ");
//  Serial.print(capSense16);
//  Serial.print("    ");
//  Serial.print(capSense17);
//  Serial.print("    ");
//  Serial.print(capSense18);
//  Serial.print("    ");
//  Serial.print(capSense19);
//  Serial.print("    ");
//  Serial.print(capSense20);
//  Serial.print("    ");
//  Serial.print(capSense21);
//  Serial.print("    ");
//  Serial.print(capSense22);
//  Serial.print("    ");
//  Serial.print(capSense23);
//  Serial.print("    ");
//  Serial.print(capSense24);
//  Serial.print("    ");
//  Serial.println(capSense25);

  delay(30); // arbitrary delay to limit data to serial port
}
