#define MIC 12

void setup() {
  Serial.begin(9600);
  pinMode(MIC, INPUT);
}

void loop() {
  int static counter = 0;
  int mic = digitalRead(MIC);

  if (mic == 0)
  {
    counter = counter + 1;
    Serial.println(counter);
  }
}
