// Conveyor Program

char value;
String msg = "Enter the value: ";

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3, OUTPUT);

  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(5, HIGH); // Conveyor motor 1 P
  digitalWrite(6, LOW); // Conveyor motor 1 N
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(3000);
  digitalWrite(5, LOW); // Conveyor motor 1 P
  digitalWrite(6, HIGH); // Conveyor motor 1 N
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(3000);
  
  digitalWrite(4, HIGH); // Conveyor motor 2 P
  digitalWrite(3, LOW); // Conveyor motor 2 N
  delay(500);
  digitalWrite(4, LOW); // Conveyor motor 2 P
  digitalWrite(3, LOW); // Conveyor motor 2 N
  delay(3000);
  digitalWrite(4, LOW); // Conveyor motor 2 P
  digitalWrite(3, HIGH); // Conveyor motor 2 N
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  delay(1000);

  Serial.println(msg);
  while(Serial.available()==0);
  value = Serial.parseInt();

  if(value == 1)
  {
     Serial.println("Mtr 1 & 2 are not working");
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
  }  
       
  if (value == 2)
   {
     Serial.println("mtr 1 is working");
     digitalWrite(7,HIGH);
     digitalWrite(8,LOW);
     delay(500);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     delay(5000); // Changeable
     digitalWrite(8,HIGH);
     digitalWrite(7,LOW);
     delay(500);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     delay(5000); // Changeable   
   }
    
  if(value == 3)
   {
     Serial.println("mtr 1 & 2 are working");
     digitalWrite(9,HIGH);
     digitalWrite(10,LOW);
     digitalWrite(7,HIGH);
     digitalWrite(8,LOW);
     delay(500);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     delay(5000); // Changeable
     digitalWrite(9,LOW);
     digitalWrite(10,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(7,LOW);
     delay(500);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     delay(5000); // Changeable
   }
}
