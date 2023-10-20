#include "mbed.h"
#include "TrafficLight.h"

TrafficLight lights;
DigitalIn sw(USER_BUTTON);
DigitalIn Butt_A(PG_0);
DigitalIn Butt_B(PG_1);
DigitalIn Butt_C(PG_2);
DigitalIn Butt_D(PG_4);

double LightSpeed = 0.5;

TrafficLight::LIGHT_STATE s;

int main()
{
    lights.setFlashSpeed(LightSpeed);

    while (true) {

        //Wait for switch press
        while (sw==0)
        {
            if (Butt_A==1)
            {
                lights.stop(); //Resets traffic lights if Button A is pressed.
            }
            else if (Butt_B==1 && ((LightSpeed <= 1) && (LightSpeed >= 0.2)))
            {
                LightSpeed -= 0.1;
                lights.setFlashSpeed(LightSpeed);
                wait_us(300000);
                while(Butt_B==1); //Wait for button release
            }
            else if (Butt_D==1 && ((LightSpeed <= 0.9) && (LightSpeed >= 0.1)))
            {
                LightSpeed += 0.1;
                lights.setFlashSpeed(LightSpeed);
                wait_us(300000);
                while (Butt_D==1); //Wait for button release
            }
            else if (Butt_C==1)
            {
                lights.getFlashSpeed();
                wait_us(300000);
                while (Butt_C==1); //Wait for button release
            }
        }
  
        //Update lights
        s = lights.nextState();

        //Debounce switch
        wait_us(300000);

        //Wait for switch release
        while (sw==1);

        //Switch debounce
        wait_us(300000);

        
    }
}

