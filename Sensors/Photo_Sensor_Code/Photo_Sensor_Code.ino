const int led = 3; // variable which stores pin number

void setup() 
{
  pinMode(led, OUTPUT);  //configures pin 3 as OUTPUT
  Serial.begin(9600);
}

void loop() 
{
   int sensor_value = analogRead(A0);
   Serial.println(sensor_value);
  if (sensor_value < 450)// the point at which the state of LEDs change 
    { 
      digitalWrite(led, HIGH);  //sets LEDs ON
    }
  else
    {
      digitalWrite(led,LOW);  //Sets LEDs OFF
    }

}
