# VomitingCat
ส่วนหนึ่งของวิชา ว30262 ออกแบบเทคโนโลยี

#วิธีการติดตั้งโปรแกรมเพื่อตั้งค่า Wi-Fi ใน Board ESP-32 devkit
1. ดาวน์โหลด Arduino IDE จากเว็บไซต์ของ Arduino โดยไปที่ https://www.arduino.cc/en/software และเลือกเวอร์ชันที่ต้องการติดตั้ง (Windows, Mac, หรือ Linux)

2. ติดตั้ง Arduino IDE โดยการดับเบิ้ลคลิกที่ไฟล์ที่ดาวน์โหลดและตามขั้นตอนการติดตั้งที่แสดงบนหน้าต่างติดตั้ง

3. เมื่อติดตั้งเสร็จสิ้น ให้ติดตั้ง board และ library ตามลิงก์ต่อไปนี้
    board:  https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    library: https://anonfiles.com/p265R2X2ye/libraries_zip

4. เปิด file และทดลองอัพโหลด

#การควบคุมการแอปพลิเคชั่น Blnk.io
1. ดาวน์โหลดแอปพลิเคชั่นจาก AppStore หรือ PlayStore
2. สมัครและลงชื่อเข้าใช้
3. สร้าง Project หา และ เปลี่ยน BLYNK_TEMPLATE_ID BLYNK_TEMPLATE_NAME BLYNK_AUTH_TOKEN ตามที่แอปพลิเคชั่นให้มาลงในโค้ดบรรทัดที่ 1 2 และ 3ง
4. สร้าง Datastream ค่า 0 - 1 ในช่อง V0
5. ทดลองกดปุ่ม หลังจากเชื่อมต่อกับเครื่อง

#วิธีการตั้งค่า Wi-Fi
 1. เปลี่ยนค่าตัวแปร (ใน บรรทัดที่ 10 และ 11)
    เช่น char ssid[] = "BJ_WIFI";
        char pass[] = "123123123";
        
        
#VomitingCat
This is part of the course "ว30262 - Designing Technology".

#How to install the program for configuring Wi-Fi on the ESP-32 devkit board
1.  Download the Arduino IDE from the Arduino website by going to https://www.arduino.cc/en/software and selecting the desired version to install (Windows, Mac, or Linux).

2.  Install the Arduino IDE by double-clicking on the downloaded file and following the installation steps displayed on the installation window.

3.  After installation, install the board and library by using the following links:
      board: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
      library: https://anonfiles.com/p265R2X2ye/libraries_zip

4.  Open the file and try uploading.

#How to configure Wi-Fi
  1. Change the variable values (in lines 10 and 11).
  For example, char ssid[] = "BJ_WIFI";
               char pass[] = "123123123";

#Controlling the Blynk.io application
  1. Download the application from the AppStore or PlayStore.
  2. Register and log in.
  3. Create a project and replace BLYNK_TEMPLATE_ID, BLYNK_TEMPLATE_NAME, and BLYNK_AUTH_TOKEN with the values provided by the application in lines 1, 2, and 3 of the code.
Create a datastream value of 0-1 in the V0 field.
Try pressing the button after connecting to the device.        
