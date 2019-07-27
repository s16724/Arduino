#include <Servo.h>
Servo My_servo;
int trig=6;
int echo=5;
float min_val=0;
float ultra_distance[90]={0};
int angle[91]={0};

void setup()
{
  My_servo.attach(9);
  My_servo.write(600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
  digitalWrite(echo,LOW);
}

void loop()
{
  
  My_servo.write(0);
  delay(600);
  int j=0;
  int index=-2;// check index value
  for (int i=0; i<=100;i+=1)
  {
    My_servo.write(i);
    delay(50);
    angle[j]=i;
    ultra_distance[j]=measure_distance_cm();
    delay(20);
    j+=1;   
    if (i==90)
    {
      break;
    } 
  }
  for (j=0;j<=90;j+=1)
  {
    min_val=max(min_val,ultra_distance[j]);
  }
  for (j=0;j<=90;j+=1)
  {
    if (min_val>ultra_distance[j])
    {
      min_val=ultra_distance[j];
      index=j;}
    }
    My_servo.write(angle[index]);
    delay(1000);  
     while(true)
     {
      float new_val=0;
      new_val= measure_distance_cm();
      if (abs(ultra_distance[index]-new_val)>=2.0)
      {
        break;
      }
     }       
}

float measure_distance_cm()
{
  float distance =0;
  long time_value=0;
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  time_value=pulseIn(echo,HIGH);
  distance=0.033*time_value/2;
  return distance;
    }
