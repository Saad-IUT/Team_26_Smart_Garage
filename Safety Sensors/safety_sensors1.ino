
#include <LiquidCrystal.h>
float temp;
int led_red=7;
int led_green=8;
int buzzer=6;
int gas=A1;
int sensorval;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
    pinMode(buzzer,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  temp=analogRead(A0);
  temp=temp*500.0 / 1023.0;
  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.setCursor(6, 1);
  lcd.print("c");
  sensorval=analogRead(gas);
  Serial.println(sensorval,DEC);
  lcd.setCursor(0,0);
  lcd.print(sensorval);
  if (temp>=36){
  	digitalWrite(led_red,HIGH);
    digitalWrite(led_green,LOW);
    lcd.setCursor(8,1);
    lcd.print("Hot ");
  }else{
  	digitalWrite(led_green,HIGH);
    digitalWrite(led_red,LOW);
    lcd.setCursor(8,1);
    lcd.print("Cool");
  }
  if(sensorval>700){
  	lcd.setCursor(4,0);
    lcd.print("High");
    tone(buzzer,800,800);
    delay(200);
    tone(buzzer,600,800);
    delay(200);
  }else{
    lcd.setCursor(4,0);
    lcd.print("LOW ");
    noTone(buzzer);
  }
  
}
 