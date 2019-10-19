// Buzzer
// buzzer make sounds
//Email:support@sunfounder.com
//Website:www.sunfounder.com
int buzzer = 13;//the pin of the active buzzer
int button = 12;
int pushButton=0;
int light=LOW;
int lastButtonState=0;
void setup()
{
  pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
  pinMode(button,INPUT);
}
void loop()
{
  pushButton = digitalRead(button);
  if(pushButton!=lastButtonState){
    if(pushButton==HIGH){
      if(light==LOW){
        light=HIGH;
      }
      if(light==HIGH){
        light=LOW;
      }
    }
  }
  digitalWrite(buzzer, light);
}
