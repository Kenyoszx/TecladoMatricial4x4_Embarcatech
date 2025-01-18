#include <stdio.h>
#include "pico/stdlib.h"

//definindo funçoes de cada pino, valor de erro e Numero de linhas e colunas
#define numLinhas 4
#define numColunas 4
#define nenhuma -1
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
#define C4 28

//Matriz de Mapeamento formato [colunas] x [linhas]
char MatrizMapeamento [4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};

//Protótipos das Funções
void inicializar();
char AcharDigito();
void Processar(char);


int main() {
    int tecla;
    stdio_init_all;
    inicializar();
    
     while (true) {
        tecla = AcharDigito();
        Processar(tecla);
}
}
void inicializar(){
    // inicialização dos pinos

    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);
    gpio_put(led_pin_red,0);

    gpio_init(led_pin_blue);
    gpio_set_dir(led_pin_blue, GPIO_OUT);
    gpio_put(led_pin_blue,0);
 
    gpio_init(led_pin_green);
    gpio_set_dir(led_pin_green, GPIO_OUT);
    gpio_put(led_pin_green,0);
    
    gpio_init(buzzer_pin);
    gpio_set_dir(buzzer_pin, GPIO_OUT);
    gpio_put(buzzer_pin,0);

    gpio_init(R1);
    gpio_set_dir(R1, GPIO_OUT);
    gpio_put(R1, 1);  // Inicializando as linhas do teclado em nível alto

    gpio_init(R2);
    gpio_set_dir(R2, GPIO_OUT);
    gpio_put(R2, 1);

    gpio_init(R3);
    gpio_set_dir(R3, GPIO_OUT);
    gpio_put(R3, 1);

    gpio_init(R4);
    gpio_set_dir(R4, GPIO_OUT);
    gpio_put(R4, 1);

    // Inicializando os pinos das colunas como entrada com pull up
    gpio_init(C1);
    gpio_set_dir(C1, GPIO_IN);
    gpio_pull_up(C1);

    gpio_init(C2);
    gpio_set_dir(C2, GPIO_IN);
    gpio_pull_up(C2);

    gpio_init(C3);
    gpio_set_dir(C3, GPIO_IN);
    gpio_pull_up(C3);

    gpio_init(C4);
    gpio_set_dir(C4, GPIO_IN);
    gpio_pull_up(C4);
}
char AcharDigito() {
    for (int linha = 0; linha < 4; linha++) {
        // Coloca todas as linhas em nível alto
        gpio_put(R1, 1);
        gpio_put(R2, 1);
        gpio_put(R3, 1);
        gpio_put(R4, 1);

        // Coloca a linha atual em nível baixo
        switch (linha) {
            case 0: gpio_put(R1, 0); break;
            case 1: gpio_put(R2, 0); break;
            case 2: gpio_put(R3, 0); break;
            case 3: gpio_put(R4, 0); break;
        }

        // Verifica as colunas
        if (!gpio_get(C1)) return MatrizMapeamento[linha][0];
        if (!gpio_get(C2)) return MatrizMapeamento[linha][1];
        if (!gpio_get(C3)) return MatrizMapeamento[linha][2];
        if (!gpio_get(C4)) return MatrizMapeamento[linha][3];
    }

    // Retorna um caractere nulo caso nenhuma tecla tenha sido pressionada
    return '\0';
}
void Processar(char tecla){
    if (tecla != '\0'){
        printf("Tecla %c Pressionada",tecla);
        switch (tecla){
        case 'A':
            gpio_put(led_pin_red,1);
            break;
        case 'B':
            gpio_put(led_pin_blue,1);
            break;
        case 'C':
            gpio_put(led_pin_green,1);
            break;
        case '#':
            gpio_put(buzzer_pin,1);
            break;
        case 'D':
            gpio_put(led_pin_red,1);
            gpio_put(led_pin_blue,1);
            gpio_put(led_pin_green,1);
            break;
        default:
            break;
            }
        }
        else
        {
            gpio_put(led_pin_red,0);
            gpio_put(led_pin_blue,0);
            gpio_put(led_pin_green,0);
            gpio_put(buzzer_pin,0);
        }
        sleep_ms(100);
}

