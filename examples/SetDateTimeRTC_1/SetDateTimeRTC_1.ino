/*----------------------------------------------------------------------*
 * A simple example of how to set the date and time,                    *
 * read the date and time from the RX8025T RTC and display them.        *
 *                                                                      *
 * The MIT License                                                      *
 * Marcin Saj 25 OCT 2022                                               *
 * https://github.com/marcinsaj/RTC_RX8025T                             *
 *----------------------------------------------------------------------*/

#include <RTC_RX8025T.h>      //https://github.com/marcinsaj/RTC_RX8025T
#include <TimeLib.h>          //https://github.com/PaulStoffregen/Time
#include <Wire.h>             //https://arduino.cc/en/Reference/Wire (included with Arduino IDE)

//Declare structure that allows convenient access to the elements of time like hours, minutes and seconds
tmElements_t tm;

void setup(void)
{ 
  Serial.begin(9600);
  delay(3000);
  
  //RX8025T initialization
  RTC_RX8025T.init();
          
  //The Time library is a software RTC_RX8025T. 
  //"system time" it is referring to the current time according to the software RTC_RX8025T.
  //Set the system time to 10h 23m 30s on 25 Oct 2022
  setTime(10, 23, 30, 25, 10, 22);
  //Set the RTC from the system time
  RTC_RX8025T.set(now());
}

void loop(void)
{
  //Read the time from the RTC and store it in the tm structure
  RTC_RX8025T.read(tm);
  printDateTime();

  delay(1000);
}

void printDateTime(void)
{
  Serial.print("Date: ");
  //Time library macro for convenient Year conversion to calendar format
  Serial.print(tmYearToCalendar(tm.Year));
  Serial.print(".");
  if(tm.Month < 10) Serial.print("0");
  Serial.print(tm.Month);
  Serial.print(".");
  if(tm.Day < 10) Serial.print("0");
  Serial.print(tm.Day);
  Serial.print("  ");
  
  Serial.print("Time: ");
  if(tm.Hour < 10) Serial.print("0");
  Serial.print(tm.Hour);
  Serial.print(":");
  if(tm.Minute < 10) Serial.print("0");
  Serial.print(tm.Minute);
  Serial.print(":");
  if(tm.Second < 10) Serial.print("0");
  Serial.println(tm.Second); 
}
