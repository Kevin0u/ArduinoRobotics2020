#include <Wire.h>
#include <L3G.h>
L3G gyro;
void setup() {
  Serial.begin(9600);
  
  Wire.begin();

  if (!gyro.init())
  {
    Serial.println("Failed to autodetect gyro type!");
    while (1);
  }

  gyro.enableDefault(); 
}

void loop() {
    gyro.read();
    Serial.print("X: ");
    Serial.println(gyro.g.x);
    
    
    String xcoord = (String)gyro.g.x;
    String ycoord = (String)gyro.g.y;
    String zcoord = (String)gyro.g.z;
    
    String xinput = ( "X: " + xcoord);
    String yinput = ( "Y: " + ycoord);
    String zinput = ( "Z: " + zcoord);
    
}
