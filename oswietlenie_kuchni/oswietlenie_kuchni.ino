#define MIC 12
#define TRIG 11

void setup() {
  Serial.begin(9600);
  pinMode(MIC, INPUT);
  pinMode(TRIG, OUTPUT);
  digitalWrite(TRIG, HIGH);
}

void loop() {
  int static counter = 0;
  int mic = digitalRead(MIC);
  int trig=digitalRead(TRIG);
  int i = 0;
  if (mic == 0)
  {
    delay(250);
    counter++;
    Serial.println(counter);
    if (counter == 3 && trig == HIGH)
    {
      digitalWrite(TRIG, LOW);
      counter = 0;
    }
    if (counter == 3 && trig == LOW)
    {
      digitalWrite(TRIG, HIGH);
      counter = 0;
    }
  }
}
