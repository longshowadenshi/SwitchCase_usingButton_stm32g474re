#ifndef Switch_H
#define Switch_H
#include <Arduino.h>
class Switch
{
  public:
    Switch(int pin1, int pin2);
    void count();
    void switchcase();
    int state;
    int oldstate;
    int countup=0;
    int _pin1,_pin2;
};
#endif
