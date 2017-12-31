
int pot =A0;
void setup() {
  // put your setup code here, to run once:

  pinMode(pot,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  int ret=analogRead(pot);
  int value=map(ret,0,1023,0,255);
  analogWrite(3,value);

  if(value<10)
  {
   digitalWrite(4,value); 
  }
  else if(value<20)
  {
   digitalWrite(4,value); 
   digitalWrite(5,value); 

  }
   else if(value<30)
  {
   digitalWrite(4,value);
   digitalWrite(5,value); 
   digitalWrite(6,value); 
 
  } else if(value<40)
  {
    digitalWrite(4,value);
   digitalWrite(5,value); 
   digitalWrite(6,value); 
    digitalWrite(7,value);
 
  } else if(value<50)
  {
   digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
      digitalWrite(8,value);

 
  } else if(value<60)
  {
   digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
   digitalWrite(8,value);
   digitalWrite(9,value);
 
  } else if(value<70)
  {
   digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
   digitalWrite(8,value);
   digitalWrite(9,value);
   digitalWrite(10,value);
 
  } else if(value<80)
  {
  digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
   digitalWrite(8,value);
   digitalWrite(9,value);
   digitalWrite(10,value);
   digitalWrite(11,value);

  } else if(value<90)
  {
   digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
   digitalWrite(8,value);
   digitalWrite(9,value);
   digitalWrite(10,value);
   digitalWrite(11,value);
   digitalWrite(12,value);
 
  } else if(value<100)
  {
 digitalWrite(4,value);
      digitalWrite(5,value);
   digitalWrite(6,value);
   digitalWrite(7,value);
   digitalWrite(8,value);
   digitalWrite(9,value);
   digitalWrite(10,value);
   digitalWrite(11,value);
   digitalWrite(12,value);
   digitalWrite(13,value);

   }

 
}
