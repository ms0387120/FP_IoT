int PIR_count=0;
char readcharbuffer[20];
int readbuffersize;
char temp_input;  

void setup()
{
    pinMode(2, INPUT);
    Serial.begin(9600);
    Serial1.begin(9600);
    Serial.println(" test!");
}
void loop()
{
  int sensorValue = digitalRead(2);
  if(sensorValue == HIGH){
     PIR_count++;
     Serial.println("yes, a motorcycle");
  }else{
     Serial.println("no, slience");
  }


  Serial.println("Ready to Send");
  Serial.print("AT+DTX=11,\"T");
  Serial.println("\"");
  
  Serial1.print("AT+DTX=11,\"T");
  Serial1.println("\"");


  delay(1000);

  /*
  Serial.println("Ready to Send");
  Serial1.println("AT+DTX=11,\"12345ABCdef\"");
  delay(1000);*/
  /*readbuffersize = Serial1.available();
  while(readbuffersize){
    temp_input = Serial1.read();
    Serial.print(temp_input);
    readbuffersize--;
 }
 delay(9000);
   readbuffersize = Serial1.available();
  while(readbuffersize){
    temp_input = Serial1.read();
    Serial.print(temp_input);
    readbuffersize--;
 }
 Serial.println("things");
  delay(10000);*/
}

