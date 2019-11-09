const int ledCount = 10;    // the number of LEDs in the bar graph 
 
// an array of pin numbers to which LEDs are attached 
int ledPins[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; 
 
void setup() {   
  // loop over the pin array and set them all to output:   
  for (int i = 0; i < ledCount; i++) {     
    pinMode(ledPins[i], OUTPUT);   
  } 
}
 
void loop() {   // the ith LED of LED bar graph will light up in turn   
  for (int i = 0; i < ledCount; i++) {     
    barGraphDisplay(i);    
  } 
}
 
void barGraphDisplay(int ledOn) {   
  // make the "ledOn"th LED of bar graph LED on and the others off   
  for (int i = 0; i < ledCount; i++) {     
    if (i == ledOn){
      digitalWrite(ledPins[i], HIGH);
    }
      else {
        digitalWrite(ledPins[i], LOW);   
        delay(1); 
      }
  }
}
