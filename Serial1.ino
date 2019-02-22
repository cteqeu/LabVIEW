// Application by Vincent Claes
// vincent@cteq.eu
// 14/11/2018

void setup() {
  // Setting up Serial Communication with 115200 baudrate
	Serial.begin(115200);
}
void loop() {
  // Sending a string over serial communication
	Serial.println("Hello From the Hardware World");
	// 1 Second Delay
	delay(1000);
}