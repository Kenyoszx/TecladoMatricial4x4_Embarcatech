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

char MatrizMapeamento [4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};

//Protótipos das Funções
void inicializar();

int main() {

    inicializar();
    
     while (true) {
      
    }
}

void inicializar(){
    // inicialização dos pinos
    stdio_init_all();

    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);
    gpio_pull_down(led_pin_red);

    gpio_init(led_pin_blue);
    gpio_set_dir(led_pin_blue, GPIO_OUT);
    gpio_pull_down(led_pin_blue);
 
    gpio_init(led_pin_green);
    gpio_set_dir(led_pin_green, GPIO_OUT);
    gpio_pull_down(led_pin_green);
    
    gpio_init(buzzer_pin);
    gpio_set_dir(buzzer_pin, GPIO_OUT);
    gpio_pull_down(buzzer_pin);

    gpio_init(R1);
    gpio_set_dir(R1, GPIO_IN);
    gpio_pull_down(R1);

    gpio_init(R2);
    gpio_set_dir(R2, GPIO_IN);
    gpio_pull_down(R2);

    gpio_init(R3);
    gpio_set_dir(R3, GPIO_IN);
    gpio_pull_down(R3);

    gpio_init(R4);
    gpio_set_dir(R4, GPIO_IN);
    gpio_pull_down(R4);

    gpio_init(C1);
    gpio_set_dir(C1, GPIO_IN);
    gpio_pull_down(C1);

    gpio_init(C2);
    gpio_set_dir(C2, GPIO_IN);
    gpio_pull_down(C2);

    gpio_init(C3);
    gpio_set_dir(C3, GPIO_IN);
    gpio_pull_down(C3);

    gpio_init(C4);
    gpio_set_dir(C4, GPIO_IN);
    gpio_pull_down(C4);
}