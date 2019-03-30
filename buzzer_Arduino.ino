//Bozic & Bragagnolo
int ledGreen;
int ledRed;
int ledPause;
int buzzer;
int button;
int buttonHIGHorLOW;
int resultReflexLed;
int resultReflexBuzzer;
 

void setup() {
  ledGreen = 6;
  ledRed = 7;
  ledPause = 8;
  buzzer = 9;
  button = 10;
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledPause, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  

}
int TryReflex(String text, int ledBuzzer)
{
  delay(random(1000,5000));
  digitalWrite(ledBuzzer, HIGH);
  int InizioProva = millis();
  buttonHIGHorLOW = digitalRead(button);
  bool pressed = false;
  while(!pressed) 
  {
   if(buttonHIGHorLOW == HIGH)
   {
    pressed = true;
   }
  }
  digitalWrite(ledBuzzer, LOW);
  int FineProva = 0;
  int FinalTempo = FineProva - InizioProva;
  Serial.println(text + String(FinalTempo));
  return FinalTempo;
}
  
void loop() {
  buttonHIGHorLOW = digitalRead(button);
  bool pressed = false;
  while(!pressed)
      {
      if(buttonHIGHorLOW == HIGH)
        {
        pressed == true;
        }
  }
  resultReflexLed = TryReflex("The time passed when the last led lighted was: ms", ledPause);
  resultReflexBuzzer = TryReflex("The time passed when the last buzzer sound was: ms", buzzer);
  if(resultReflexLed < 400 && resultReflexBuzzer < 400) 
    {
    digitalWrite(ledGreen, HIGH);
    }
    else
    {
    digitalWrite(ledRed, HIGH);
    }
    delay(3000);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    
}
