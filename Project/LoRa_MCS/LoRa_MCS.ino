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

void pass()
{
  int dig = 1;
  if(PIR_count >= 10 && PIR_count <= 99) dig = 2;
  if(PIR_count >= 100) dig = 3;

  Serial.print("AT+DTX=4");
  Serial.print(",\"T");
  if(dig == 1) Serial.print("00");
  else if(dig == 2) Serial.print("0");
  Serial.println(PIR_count);
  
  Serial1.print("AT+DTX=4");
  Serial1.print(",\"T");
  if(dig == 1) Serial1.print("00");
  else if(dig == 2) Serial1.print("0");
  Serial1.print(PIR_count);

  Serial1.println("\"");

  Serial.println("success");
  delay(1000);

  readbuffersize = Serial1.available();
  while(readbuffersize){
    temp_input = Serial1.read();
    Serial.print(temp_input);
    readbuffersize--;
 }
 Serial.println("read data");
 delay(1000);
/*   readbuffersize = Serial1.available();
  while(readbuffersize){
    temp_input = Serial1.read();
    Serial.print(temp_input);
    readbuffersize--;
 }*/
 Serial.println("things");
}

int cnt = 0;
int f = 0;
int b = 0;
void loop()
{
  int sensorValue = digitalRead(2);
  if(sensorValue == HIGH){
     f++;
     Serial.println("yes, a motorcycle");
  }else{
     f = 0;
     Serial.println("no, slience");
  }

  if(f > 18){
    b++;
    PIR_count++;
    f = 0;
  }
  
  if(cnt == 50)
    pass();

    
  delay(100);

  if(cnt == 50) cnt = 0;
  else cnt++;
}

