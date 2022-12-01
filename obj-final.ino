//include the library
#include <CapacitiveSensor.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

//define the digital pin that the LED strip is connected to
#define PIN1 10
#define PIN2 11
#define PIN3 12
#define PIN4 13

//the first parameter is the number of LEDs you have - change for your strip
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(1, PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(1, PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(1, PIN3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(1, PIN4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(1, PIN4, NEO_GRB + NEO_KHZ800);

//pin 2 is SEND pin - common for all
CapacitiveSensor cs_2_3 = CapacitiveSensor(2, 3);
CapacitiveSensor cs_2_4 = CapacitiveSensor(2, 4);
CapacitiveSensor cs_2_5 = CapacitiveSensor(2, 5);
CapacitiveSensor cs_2_6 = CapacitiveSensor(2, 6);

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

  strip1.begin(); //we always need to do this
  strip1.show(); // Initialize all pixels to 'off'
  strip2.begin(); //we always need to do this
  strip2.show(); // Initialize all pixels to 'off'
  strip3.begin(); //we always need to do this
  strip3.show(); // Initialize all pixels to 'off'
  strip4.begin(); //we always need to do this
  strip4.show(); // Initialize all pixels to 'off'

  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // sensor stuff cs_commonPin#_touchPin
  long capSense1 =  cs_2_52.capacitiveSensor(30);
  long capSense2 =  cs_2_53.capacitiveSensor(30);
  long capSense3 =  cs_2_50.capacitiveSensor(30);
  long capSense4 =  cs_2_51.capacitiveSensor(30);
  long capSense1 =  cs_2_7.capacitiveSensor(30);
  long capSense2 =  cs_2_8.capacitiveSensor(30);
  long capSense3 =  cs_2_9.capacitiveSensor(30);
  long capSense4 =  cs_2_10.capacitiveSensor(30);

  // LED stuff
  if(capSense1 > 100) {
      strip1.setPixelColor(0, 255, 0, 0); //r
      strip1.setBrightness(50);
      strip1.show();
//      delay(500);
            
//      //turn off on one at a time
//      for(uint16_t i=0; i<strip.numPixels(); i++) {
//          strip.setPixelColor(i, 0, 0, 0); //set to purple, takes RGB vals 0-255
//          strip.show();
//          delay(500);
//          }
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
      delay(500);

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

  // serial monitor code
  Serial.print(capSense1); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense2); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.print(capSense3); //print raw sensor value
  Serial.print("    "); //print raw sensor value
  Serial.println(capSense4); //print raw sensor value

  delay(30); // arbitrary delay to limit data to serial port
}
