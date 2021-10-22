int x = 0;
int y = 0;
int z = 0;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  x = analogRead(A0);
  y = analogRead(A1);
  z = analogRead(A2);

  if(x > 941 || y > 941 || z > 941) {
  	tone(10, 523, 1000);
  }
  else noTone(10);
  delay(10);
}