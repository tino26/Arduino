#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_E1, NOTE_E1, NOTE_E1, NOTE_C1, NOTE_E1, NOTE_G1, NOTE_G1
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 8, 4
};

void setup() {
  //iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    if(thisNote==1 || thisNote==3 || thisNote==5){
      delay(300);
      // stop the tone playing:
      noTone(8);
    }
    delay(150);
    // stop the tone playing:
    noTone(8);
  }
    
}

void loop() {
  // no need to repeat the melody.
}
