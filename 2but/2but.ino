int led1=5;
int led2=6;
int buttonPin=9;
int reg=A0;
bool isButOn=false;
int bright=0;

void setup() {
  // put your setup code here, to run once:
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(buttonPin, INPUT);
    pinMode(reg, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  isButOn=digitalRead(buttonPin);
  bright=analogRead(reg);
  if(isButOn==true){
    analogWrite(led1, bright);
  }else{
    analogWrite(led1, HIGH);
    delay(100);
    analogWrite(led1, LOW);
    analogWrite(led2, HIGH);
    delay(100);
    analogWrite(led2, LOW);
  }
}
