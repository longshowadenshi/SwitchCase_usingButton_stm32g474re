#include <Switch.h>
Switch::Switch(int pin1, int pin2)
{
  pinMode(pin1,INPUT);
  pinMode(pin2,OUTPUT);
  _pin1=pin1;
  _pin2=pin2;
}
void Switch::count()
{
  state=digitalRead(_pin1);
  if((state==HIGH)&&(oldstate==LOW))
  {
    countup=countup+1;

  }
    if(countup>4)
    {
      countup=0;
    }
  oldstate=state;
}
void Switch::switchcase()
{
  switch(countup)
  {
     case 0:
      analogWrite(_pin2,0);
      break;
    case 1:
      analogWrite(_pin2,70);
      break;
    case 2:
      analogWrite(_pin2,80);
      break;
    case 3:
      analogWrite(_pin2,100);
      break;
    case 4:
      analogWrite(_pin2,130);
      break;
  }
}
