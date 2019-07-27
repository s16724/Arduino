void setup()
{
  for (int i = 0; i <= 1; i++)
  {
    pinMode(i, INPUT);
  }
  for (int j = 2; j <= 13; j++)
  {
    pinMode(j, OUTPUT);
  }
}

void loop()
{
  
    if (digitalRead(1) == HIGH)
    {
      int d=250;
      int i = 2;
      petlaLewo(i,d);
    }
    if (digitalRead(0) == HIGH)
    {
      int d=250;
      int i = 13;
      petlaPrawo(i,d);
    }
  }


void petlaLewo(int i,int d)
{
  while (i <= 13 && i != 0 )
  {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
    i++;
    if (digitalRead(0) == HIGH)
    {
      d=d-10;
      petlaPrawo(i,d);
      i = 0;
    }
  }
}

void petlaPrawo(int i,int d)
{
  while (i >= 2 && i != 0)
  {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
    i--;
    if (digitalRead(1) == HIGH)
    {
      d=d-10;
      petlaLewo(i,d);
      i = 0;
    }
  }
}
