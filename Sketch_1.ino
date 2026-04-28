/*Blink LED Sketch
By Christian Nunez 1-12-2026*/
void setup() {
  pinMode(13, OUTPUT); //set up digital pins to output




}

void loop() {
  digitalWrite(13, HIGH); //turn on digital pin 13
  delay(250); //pause for one quarter second 
  digitalWrite(13, LOW); //turn off digital pin 13
  delay(250); //pause for one quarter second
}
