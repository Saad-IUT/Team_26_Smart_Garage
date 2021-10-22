#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
#include <Servo.h>
Servo rservo;
int a=0;
int b=0;
int c=9;
int d=0;
int e=11;
int f=0;
void setup() 
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  rservo.attach(8);
  pinMode(13, OUTPUT);
  pinMode(9, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
}

void loop() 
{ 
 d=digitalRead(c);
 f=digitalRead(e);  
if(d==1)
{
 f==0;
 delay(2000);

}
 else if(f==1)
{
 d==0;
 delay(2000);
 
}  
  if(a==0)
{
 lcd.setCursor(1,0);
 lcd.print("No Car inside"); 
 rservo.write(0);   
 a=1;
 b=0;    
}
 else if((d==1)&&(a==1))
{
 lcd.setCursor(1,0);
 lcd.print("1  Car");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);   
 a=2; 
 b=4;  
}
 else if((d==1)&&(a==2))
{  
 lcd.setCursor(1,0);
 lcd.print("2 Cars");  
 rservo.write(45);   
 delay(2500);   
 rservo.write(0);
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);   
 a=3; 
 b=3;
}
else if((d==1)&&(a==3))
{ 
 lcd.setCursor(1,0);
 lcd.print("3 Cars");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);      
 a=4;    
 b=2;  
}  
 else if((d==1)&&(a==4))
{
 lcd.setCursor(1,0);
 lcd.print("4 Cars");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0);   
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);      
 a=5; 
 b=1;  
} 
 else if((d==1)&&(a==5))
{
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);       
 lcd.setCursor(1,0);
 lcd.print("5 Cars");
 delay(2500);   
 rservo.write(100);   
 delay(2500);   
 rservo.write(0);  
 lcd.setCursor(1,0);
 a=6;
 b=0;  
}  
else if((d==1)&&(a==6))
{
 rservo.write(0);
 lcd.setCursor(1,0);
 lcd.print("Full Capacity");
 delay(2500);   
 lcd.setCursor(1,0);
 lcd.print("                 "); 
 delay(2500);     
 digitalWrite(12, HIGH);
 delay(1000);
 digitalWrite(12, LOW);
  lcd.print("Full Capacity");
 delay(2500);   
 lcd.setCursor(1,0);
 lcd.print("                 "); 
 delay(2500);    
}    
 else if((f==1)&&(b==0))
{ 
 lcd.setCursor(1,0);
 lcd.print("                 "); 
 lcd.setCursor(1,0);
 lcd.print("4 Cars");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);     
 b=1; 
 a=4;  
}
 else if((f==1)&&(b==1))
{  
 lcd.setCursor(1,0);
 lcd.print("3 Cars");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);      
 b=2; 
 a=3;  
}
else if((f==1)&&(b==2))
{ 
 lcd.setCursor(1,0);
 lcd.print("2 Cars");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0);
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);     
 b=3; 
 a=2; 
}  
 else if((f==1)&&(b==3))
{
 lcd.setCursor(1,0);
 lcd.print("1  Car");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);  
 b=4;
 a=1;  
} 
 else if((f==1)&&(b==4))
{
 lcd.setCursor(1,0);
 lcd.print("No Car inside");  
 rservo.write(100);   
 delay(2500);   
 rservo.write(0); 
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);  
 b=5;  
 a=0;  
}
else if((f==1)&&(b==5))
{
 rservo.write(0);
 digitalWrite(13, HIGH);    
} 
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);   
  //Serial.print(a);
  //Serial.print(b);
  //Serial.print(c);
  Serial.print(d);
  //Serial.print(e);
  Serial.print(f);
  //Serial.print(10);
  
  lcd.setCursor(1,1);
  lcd.print("                ");
  delay(100);
  lcd.setCursor(1,1);
  lcd.print("Limit 5 Cars");
  delay(1000);
  lcd.setCursor(1,1);
  lcd.print("                ");
  delay(100);
  lcd.setCursor(1,1);
  lcd.print("Thank you");
  delay(1000);  
  lcd.setCursor(1,1);
  lcd.print("");
  delay(100);
  lcd.setCursor(1,1);
  lcd.print("for visiting!!");
  delay(1000);  
}