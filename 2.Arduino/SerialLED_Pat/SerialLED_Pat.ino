int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
 
byte leds = 0;
 
void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT); 
  pinMode(clockPin, OUTPUT);
}
 
void loop() 
{
  //leds = 7;
  leds = 0;
  bitSet(leds, 7);
  updateShiftRegister();
  delay(500);
  // for (int i = 0; i < 8; i++)
  // {
    //leds = 9;
    // bitSet(leds, i);
    //updateShiftRegister();
    //delay(500);
  // }
}
 
void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}
