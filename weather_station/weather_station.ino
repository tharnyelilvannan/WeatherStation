/*
 * Author: Tharny Elilvannan
 * Last Updated: March 12, 2025
 * Purpose: Measures temperature and altitude outside, may measure wind in the future.
 */

#include <Adafruit_BMP085.h>

void setup() {
  Adafruit_BMP085 bmps;
  if (bmps.begin() != true) {
    serial.print("Error."); // change when connected to LCD
  } // end of if statement
}

void loop() {
  // put your main code here, to run repeatedly:

}
