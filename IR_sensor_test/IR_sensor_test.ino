byte sensorPin=2;
int latestVal=0;
int maxVal=0;
int minVal=1024; 
int latestVal1=0;
void setup() {
  Serial.begin(9600);
  Serial.println("in setup");    
}

void loop() {
  //Serial.println("In loop");
  latestVal = analogRead(sensorPin);
  if(latestVal < minVal) {
    minVal = latestVal; 
  }
  if(latestVal > maxVal) {
    maxVal = latestVal;  
  }
  Serial.print("Max: ");
  Serial.print(maxVal);
  Serial.print(" Min: ");
  Serial.print(minVal);
  Serial.print(" Latest: ");
  Serial.println(latestVal);
  latestVal1 = map(latestVal, 1024, 0, 0, 150);
  Serial.println(latestVal1);
//  analogWrite(sensorPin, latestVal);
  delay(1000);
}
