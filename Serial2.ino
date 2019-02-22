// Application by Vincent Claes
// vincent@cteq.eu
// 14/11/2018

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // Setting up Serial Communication with 115200 baudrate
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    // Parse Received value as an integer
    int state = Serial.parseInt();
    // Reading in Delimiter 
    Serial.read();
    if(state==1)
      digitalWrite(LED_BUILTIN, HIGH); 
    if(state==0)
      digitalWrite(LED_BUILTIN, LOW);
  }
}