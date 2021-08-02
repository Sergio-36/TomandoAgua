int relay = 6;                                                                
int signalOnOff =  3;
int contador = 0;
unsigned long duration;

void setup()
{
  pinMode(relay, OUTPUT);
  pinMode(signalOnOff, INPUT);    
}

void  loop()
{
   duration = pulseIn(senal, HIGH);
    if (duration > 0) 
    {
//     power1(duration);
    }
}

void switchPwm(int duration)
{
  if (duration > 0 && contador == 0)
  {
     digitalWrite(relay, HIGH);
     duration = 0;
     contador = 1;

  }
   if (duration > 0 && contador == 1)
   {
    digitalWrite(relay, LOW);
    duration = 0;
    contador = 0;

   }
}
