# Arduino RTC-RX8025T Library v1.0 #  

https://github.com/marcinsaj/RTC-RX8025T  
The MIT License  
Marcin Saj 25 Oct 2022  


## Introduction ##
**RTC-RX8025T** is an Arduino library that supports the Seiko Epson RX8025T Real Time Clock. This library is intended to be used with the [Arduino Time library](http://www.arduino.cc/playground/Code/Time). RTC-RX8025T implements functions to support the Date and Time functions, interrupt output, frequency output, alarm and timer functions.

The **RTC-RX8025T** library is based on the Paul Stoffregen [library DS3232RTC](https://github.com/PaulStoffregen/DS3232RTC).

## RTC RX8025T Module
- [Project website - Datasheet](https://nixietester.com/project/real-time-clock-rx8025t)
- [Availability - How to get](https://nixietester.com/product/real-time-clock-rx8025t)
- [Arduino Library - How to use](https://github.com/marcinsaj/RTC-RX8025T)

## Timekeeping accuracy ##
The accuracy depends on the version of the RTC module used and the operating temperature, more in the [summary](https://github.com/marcinsaj/RTC-RX8025T/blob/main/datasheet/RX8025T-Datasheet-summary.pdf).

- RTC RX8025T-UA
  - ± 1.9 x 10-6 / 0 ºC to +40 ºC (Equivalent to 5 seconds of month deviation)
  - ± 3.4 x 10-6 / -40 ºC to +85 ºC (Equivalent to 9 seconds of month deviation)

- RTC RX8025T-UB
  - ± 3.8 x 10-6 / 0 ºC to +50 ºC (Equivalent to 10 seconds of month deviation)
  - ± 5.0 x 10-6 / -40 ºC to +85 ºC (Equivalent to 13 seconds of month deviation)

## Library Installation ##
To use the **RTC-RX8025T** library:  
- Go to https://github.com/marcinsaj/RTC-RX8025T, click the **Download ZIP** button and save the ZIP file to a convenient location on your PC.
- Uncompress the downloaded file.  This will result in a folder containing all the files for the library, that has a name that includes the branch name, usually **RTC-RX8025T-master**.
- Rename the folder to just **RTC-RX8025T**.
- Copy the renamed folder to the Arduino sketchbook\libraries folder.

## Examples ##
The following example sketches are included with the **RTC-RX8025T** library:
- [SetDateTimeRTC](https://github.com/marcinsaj/RTC-RX8025T/blob/main/examples/SetDateTimeRTC/SetDateTimeRTC.ino) - Set and displays the RTC date and time.
- [InterruptOutputRTC](https://github.com/marcinsaj/RTC-RX8025T/blob/main/examples/InterruptOutputRTC/InterruptOutputRTC.ino) - Generate an interrupt by the RTC (INT output) every second or every minute and handle the interrupt.
- [FrequencyoutputRTC](https://github.com/marcinsaj/RTC-RX8025T/blob/main/examples/FrequencyOutputRTC/FrequencyOutputRTC.ino) - Generate square wave by the RTC (FOUT output) with preset frequencies: 32.768 kHz, 1024 Hz, 1Hz.
To do:
- Alarm - not yet implemented in the library
- Timer - not yet implemented in the library

## Usage notes ##
When using the **RTC-RX8025T** library, the user is responsible for ensuring that reads and writes do not exceed the device's address space (0x00-0x0F), no bounds checking is done by the library.            

To use the **RTC-RX8025T** library, the Time and Wire libraries must also be included:
```c++
#include <RTC-RX8025T.h>  //https://github.com/marcinsaj/RTC-RX8025T
#include <TimeLib.h>      //https://github.com/PaulStoffregen/Time
#include <Wire.h>         //https://arduino.cc/en/Reference/Wire (included with Arduino IDE)
```




<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/extras/Real-Time-Clock-RTC-RX8025T-01.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/extras/Real-Time-Clock-RTC-RX8025T-02.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/real-time-clock-rtc-rx8025t-pinout-1.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/real-time-clock-rtc-rx8025t-pinout-2.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/real-time-clock-rtc-rx8025t-pinout-info.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/real-time-clock-rtc-rx8025t-dimensions-1.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/real-time-clock-rtc-rx8025t-dimensions-2.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Real-Time-Clock-RX8025T/blob/main/datasheet/Real-Time-Clock-RX8025T-Schematic.png"></p>
