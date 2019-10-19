// Buzzer
// buzzer make sounds
//Email:support@sunfounder.com
//Website:www.sunfounder.com
int buzzer = 13;//the pin of the active buzzer
int button = 12;
int ring=0;
void setup()
{
  pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
  pinMode(button,INPUT);
}
void loop()
{
  ring = digitalRead(button);
  if(ring==HIGH){
    digitalWrite(buzzer,HIGH);
  }else{
    digitalWrite(buzzer, LOW);
  }
}
