#include <stdio.h>
#include "pico/stdlib.h"

//definindo funçoes de cada pino
#define led_pin_red 13
#define led_pin_blue 12
#define led_pin_green 11
#define buzzer_pin 21
#define R1 8
#define R2 7
#define R3 6
#define R4 5
#define C1 4
#define C2 3
#define C3 2
#define C4 1


int main() {
    stdio_init_all();
    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);

    gpio_init(led_pin_blue);
    gpio_set_dir(led_pin_blue, GPIO_OUT);
 
    gpio_init(led_pin_green);
    gpio_set_dir(led_pin_green, GPIO_OUT);
    
    gpio_init(buzzer_pin);
    gpio_set_dir(buzzer_pin, GPIO_OUT);

    gpio_init(R1);
    gpio_set_dir(R1, GPIO_IN);

    gpio_init(R2);
    gpio_set_dir(R2, GPIO_IN);

    gpio_init(R3);
    gpio_set_dir(R3, GPIO_IN);

    gpio_init(R4);
    gpio_set_dir(R4, GPIO_IN);

    gpio_init(C1);
    gpio_set_dir(C1, GPIO_IN);

    gpio_init(C2);
    gpio_set_dir(C2, GPIO_IN);

    gpio_init(C3);
    gpio_set_dir(C3, GPIO_IN);

    gpio_init(C4);
    gpio_set_dir(C4, GPIO_IN);

    
     while (true) {
      
    }
}
