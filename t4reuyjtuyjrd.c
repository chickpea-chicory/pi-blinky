#include <stdio.h>
#include "pico/stdlib.h"


int main()
{
gpio_init(25);
gpio_set_dir(25,GPIO_OUT);
while(true)
    {
        gpio_put(25,1);
        sleep_ms(1000);
        gpio_put(25,0);
        sleep_ms(1000);
       // turn on the LED for 1 second, then turn it off for 1 second, and repeat this indefinitely.
    }

    }