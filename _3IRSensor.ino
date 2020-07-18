//locate your IR Sensor pin 
  int ir1=8,ir2=9,ir3=10;
void setup() {
   // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); //Motor Pins (Forword & Backword)
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
 

}

void loop() {
   // put your main code here, to run repeatedly:

  if((digitalRead(8)==HIGH && digitalRead(9)==LOW && digitalRead(10)==HIGH)|| (digitalRead(8)==LOW && digitalRead(9)==HIGH && digitalRead(10)==LOW)){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);//Forword(1,0,1)&(0,1,0)
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
else if((digitalRead(8)==HIGH && digitalRead(9)==LOW && digitalRead(10)==LOW) || (digitalRead(8)==HIGH && digitalRead(9)==HIGH && digitalRead(10)==LOW)){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);//Right(1,0,0)&(1,1,0)
    digitalWrite(5,HIGH);
  }
  else if((digitalRead(8)==LOW && digitalRead(9)==LOW && digitalRead(10)==HIGH) || (digitalRead(8)==LOW && digitalRead(9)==HIGH && digitalRead(10)==HIGH)){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);//Left(0,0,1)&(0,1,1)
    digitalWrite(5,LOW);
  }
  else if((digitalRead(8)==LOW && digitalRead(9)==LOW && digitalRead(10)==LOW) || (digitalRead(8)==HIGH && digitalRead(9)==HIGH && digitalRead(10)==HIGH)){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);//Stop(0,0,0)&&(1,1,1)
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }

}
