// Note: This is code for an Arduino board, not Processing
int sensorPin = 0; // Select input pin
int val = 0;
void setup() {
  Serial.begin(9600); // Open serial port
}
void loop() {
  val = analogRead(sensorPin); // Read value from sensor
  Serial.write((int)val);  
  delay(100); // Wait 100 milliseconds
}

