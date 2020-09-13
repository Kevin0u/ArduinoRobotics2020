
#include <LiquidCrystal.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_L3GD20_U.h>

L3G gyro;


LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{

  lcd.begin(16, 2);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Accelerometer");
  lcd.setCursor(0,1);
  lcd.print("Test");
  delay(1000);

  Serial.begin(9600);
  
  Wire.begin();

  if (!gyro.init())
  {
    Serial.println("Failed to autodetect gyro type!");
    while (1);
  }

  gyro.enableDefault(); 
}

void loop()
{

 lcd.clear();

    gyro.read();
    Serial.print("X: ");
    Serial.println(gyro.g.x);
    
    
    String xcoord = (String)gyro.g.x;
    String ycoord = (String)gyro.g.y;
    String zcoord = (String)gyro.g.z;
    
    String xinput = ( "X: " + xcoord);
    String yinput = ( "Y: " + ycoord);
    String zinput = ( "Z: " + zcoord);
    
  
  lcd.setCursor(0,0);
  lcd.print(xinput);
  lcd.setCursor(0,1);
  lcd.print(yinput);
  
  delay(500);
}
