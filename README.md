# TecladoMatricial4x4_Embarcatech

Este projeto utiliza um teclado matricial de 4x4, LEDs e um buzzer, implementado em um microcontrolador Raspberry Pi Pico. O código permite que o usuário interaja com o teclado, acendendo LEDs e acionando um buzzer com base nas teclas pressionadas.

## Funcionalidade

### Componentes

- **Teclado Matricial**: Um teclado de 4 linhas e 4 colunas, permitindo a entrada de 16 caracteres.
- **LEDs**: Três LEDs (vermelho, azul e verde) que podem ser acesos com teclas específicas.
- **Buzzer**: Um buzzer que pode ser acionado por uma tecla específica.

### Mapeamento do Teclado

O teclado é mapeado da seguinte forma:<br/>
1  2  3  A <br/>
4  5  6  B <br/>
7  8  9  C <br/>
0  *  #  D <br/>


### Comportamento

- **Teclas Especiais**:
  - **A**: Acende o LED vermelho.
  - **B**: Acende o LED azul.
  - **C**: Acende o LED verde.
  - **#**: Aciona o buzzer.
  - **D**: Acende todos os LEDs (vermelho, azul e verde).

- **Teclas Numéricas**: Quando uma tecla numérica é pressionada, a tecla pressionada é exibida no console.

- **Desligamento**: Se nenhuma tecla estiver sendo pressionada, todos os LEDs e o buzzer são desligados.

### Estrutura do Código

- **Funções Principais**:
  - `inicializar()`: Configura os pinos do microcontrolador para os LEDs, buzzer e teclado.
  - `AcharDigito()`: Verifica qual tecla foi pressionada e retorna o caractere correspondente.
  - `Processar(char tecla)`: Processa a tecla pressionada, acendendo LEDs ou acionando o buzzer conforme necessário.

### Requisitos

- Raspberry Pi Pico
- Teclado matricial 4x4
- LEDs (vermelho, azul, verde)
- Buzzer
- Resistores 
- Fios de conexão

### Conexões

- **Pinos do Teclado**:<br/>
  No código os pinos estão adaptados para serem conectados nas conexõoes disponíveis na placa educacional
  BitDogLab 6.4, mas caso esteja usando somente o microcontrolador rp2040 deve-se adaptar a numeração dos pinos para a conexão
  usada no hardware.<br/>
  - Linhas:
  - R1 = 18
  - R2 = 16
  - R3 = 19
  - R4 = 17 
  - Colunas:
  - C1 = 20
  - C2 = 4
  - C3 = 9
  - C4 = 8

- **Pinos dos LEDs**:
  - LED Vermelho: `led_pin_red` (pino 13)
  - LED Azul: `led_pin_blue` (pino 12)
  - LED Verde: `led_pin_green` (pino 11)

- **Pino do Buzzer**:
  - Buzzer: `buzzer_pin` (pino 21)

### Compilação e Execução

1. Certifique-se de que o ambiente de desenvolvimento do Raspberry Pi Pico está configurado.
2. Compile o código usando o CMake.
3. Carregue o código no Raspberry Pi Pico.
4. Conecte os componentes conforme descrito nas conexões.
5. Execute o código e interaja com o teclado.

### Simulador Online 
https://wokwi.com/projects/420450407429818369

### Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir um problema ou enviar um pull request.

