
 # Using Arduion uno R3 (ATmega328) as usb rubber ducky:
 
 The following guide will tell you how u can convert your arduino uno into USB rubber ducky . In order to do that we need to use convert our arduino as an HID device.
 I followed the guide from here https://github.com/NicoHood/HoodLoader2, however i got lost in rabbit holes. After a lot of trying, I finally got it working by following the steps below. At the end you will have a micro controller that 
 
 
 ## Pre-requisites
 1) Obviously Arduino Uno R3 with usb connection
 2) Windows 10 System with Arduino IDE installed (download link: https://www.arduino.cc/en/software)
 3) Some jumper wires to connect your arduino
 
 ## Follow the steps below in order
 
 1) Clone the Repo or download the resources from this [subfolder](https://github.com/nigamelastic/ArduinoPublicProjects/tree/main/ArduinoUno-RubberDucky)
 2) Download Boot-loader Sketch(INO) from reference [URL](https://github.com/NicoHood/HoodLoader2/blob/master/avr/examples/Installation_Sketch/Installation_Sketch.ino)
 3) Open the INO file in the Arduino IDE
 4) Connect a Plain(no other wire connection) Arduino UNO to Laptop via USB cable
 5) In Arduino IDE, Select Tools->Board->Arduino/Genuino UNO
 6) In Arduino IDE, Select Tools->Port->ttyACM0 [Yours could be different. Use dmesg command to identify]
 7) Verify and Upload the Code and Wait for the message “Upload Done” 
 8) Disconnect the USB cable 
 9) Make the cable connection as per this [diagram](https://github.com/nigamelastic/ArduinoPublicProjects/blob/main/ArduinoUno-RubberDucky/arduino_flash.png?raw=true)
 10) Connect the USB cable again back to laptop and the boot loader will install by itself , Wait for 1 to 2 min till the boot-loader get installed
 11) once installation is finished disconnect USB cable from the laptop and disconnect all the jump wire and make the board plain

We successfully finished installing the HID bootloader now we can create our sketches and use arduino as usb HID. To program your own keystrokes and follow the steps below:

1) Connect the Board to laptop via USB cable
2( Navigate File->Preference->Settings->Additional Boards Manager URLs
3) Enter this [URL](https://raw.githubusercontent.com/NicoHood/HoodLoader2/master/package_NicoHood_HoodLoader2_index.json) and click OK
4) Navigate Tools->Board->Boards Manager
5) Search for “HoodLoader2” and install the latest version
6) Navigate to Sketch->Include Library->Add a .ZIP Library
7) Downloaded this [HID-Library](https://github.com/NicoHood/HID/archive/master.zip) as input
8) Now just create your sketch and upload it, if you know the USB rubber ducky syntax you can use this [python file](https://github.com/nigamelastic/ArduinoPublicProjects/blob/main/ArduinoUno-RubberDucky/USBRubberDuckyToArduino.py) to convert it to an arduino sketch, or you can use this [sketch](https://github.com/nigamelastic/ArduinoPublicProjects/blob/main/ArduinoUno-RubberDucky/ArduinoDuckyExample.ino) as reference and create your own.
 


 
 
 ## References
 
 https://www.instructables.com/How-to-Restore-the-Arduino-UNO-R3-ATmega16U2-Firmw/ 
 https://github.com/NicoHood/HoodLoader2
 https://www.arduino.cc/en/software
 https://just2secure.blogspot.com/2017/08/rubber-ducky-arduino-uno-configuration.html
 https://kr0no.me/post/2016/10/usb-rubber-ducky-arduino
 https://github.com/NicoHood/HID/issues/61
 https://github.com/franc205/ArduinoDucky
 https://tsucres.me/2017-03-02/UnoDucky.html
 https://github.com/NicoHood/NicoHood.github.io/wiki
 http://kr0no.me/post/2016/10/usb-rubber-ducky-arduino
 https://github.com/NicoHood/HoodLoader2/wiki/Installation-sketch-(standalone-Arduino-Uno-Mega)
 https://github.com/NicoHood/HoodLoader2/wiki/Software-Installation
 
 
 
 
