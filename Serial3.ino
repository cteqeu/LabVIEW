// Application by Vincent Claes
// vincent@cteq.eu
// 14/11/2018

#define a 2
#define b 3
#define c 5
#define d 6
#define e 7
#define f 8
#define g 9
#define p 4     // point
#define btn 10  // button on pcb

char Digits[10] = {B0111111,B0000110,B1011011,B1001111,B1100110,B1101101, B1111101,B0000111, B1111111,B1101111};

void Display_Value(char value); 

void setup() 
{ 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(p, OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(115200);
}

void loop() 
{  
   if(Serial.available()){
    // Parse Received value as an integer
    int state = Serial.parseInt();
    // Reading in Delimiter 
    Serial.read();
    Display_Value(Digits[char(state)]);
  }
}


void Display_Value(char value) 
{
  if(bitRead(value,0) == 1)
    digitalWrite(a,LOW);
  else
    digitalWrite(a,HIGH);
  if(bitRead(value,1) == 1)
    digitalWrite(b,LOW);
  else
    digitalWrite(b,HIGH);
  if(bitRead(value,2) == 1)
    digitalWrite(c,LOW);
  else
    digitalWrite(c,HIGH);
  if(bitRead(value,3) == 1)
    digitalWrite(d,LOW);
  else
    digitalWrite(d,HIGH);
  if(bitRead(value,4) == 1)
    digitalWrite(e,LOW);
  else
    digitalWrite(e,HIGH);
  if(bitRead(value,5) == 1)
    digitalWrite(f,LOW);
  else
    digitalWrite(f,HIGH);
  if(bitRead(value,6) == 1)
    digitalWrite(g,LOW);
  else
    digitalWrite(g,HIGH);
}
