//Bozic & Bragagnolo
int ledGreen;
int ledRed;
int ledPause;
int buzzer;
int button;
int buttonHIGH_or_LOW
int risultatoRiflessiLed
int risultatoRiflessiBuzzer;
 

void setup() {
  ledGreen = 6;
  ledRed = 7;
  ledPause = 8;
  buzzer = 9;
  button  10;
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledPause, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  

}
int TryReflex(String testo, int ledBuzzer)
{
  delay(random(1000,5000));
  digitalWrite(ledBuzzer, HIGH);
  int InizioProva = millis();
  buttonHIGH_o_LOW = digitalRead(button);
  bool premuto = false;
  while(!premuto) 
  {
   if(buttonHIGH_or_LOW == HIGH)
   {
    premuto = true;
   }
  }
  digitalWrite(ledBuzzer, LOW);
  int TempoFineProva = mills();
  int TempoFinale =
  
void loop() {
  

}
