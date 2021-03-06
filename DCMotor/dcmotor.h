#ifndef DCMOTOR_H
#define DCMOTOR_H

#include "Arduino.h"

#define LOWER_ANALOG_LIMIT 0

class DCMotor
{
private:
    int M_pin1 , M_pin2, M_PWMPin;

    int M_Speed;

    int turnDirection;

public:

    DCMotor(int, int, int);

    ~DCMotor();

    void SetTurnDirection(int);

    void SetTurnSpeed(int);
    
    void Reverse();

    void Turn();
    
    void Stop();

};

enum turnDirection {right, left};

#endif // DCMOTOR_H
