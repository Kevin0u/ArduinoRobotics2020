// This is a softpot project to modify PWM LED with analog input

 const int ledPin = 3;
 const int SoftPin = A0; //pin A0 to read analog input

 int value;
 
 void setup()
  {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
  }
  
  void loop()
  {
    value = analogRead(SoftPin);
    Serial.println(value);
    value = map(value, 0, 1023, 0, 255);
    analogWrite(ledPin, value);
    delay(100);
  }



 



// const int SoftPin = A0; //pin A0 to read analog input
//
// int value;
// 
// void setup()
//  {
//    Serial.begin(9600);
//  }
//  
//  void loop()
//  {
//    value = analogRead(SoftPin);
//    Serial.println(value);
//    delay(100);
//  }
