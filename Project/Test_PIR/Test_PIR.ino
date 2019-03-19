/*macro definitions of PIR motion sensor pin and LED pin*/
 
void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}
 
void loop() 
{
  int sensorValue = digitalRead(2);
  if(sensorValue == HIGH){
    Serial.println("yes, a motorcycle");
  }else{
    Serial.println("no, slience");
  }
   delay(500);
}
