#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 1.8) + 32;
    
    printf("A temperatura em Fahrenheit eh: %.2f", fahrenheit);
    
    return 0;
}

//Para converter graus Celsius para Fahrenheit, podemos utilizar a seguinte fórmula: F = (C * 1.8) + 32
//lê a temperatura em graus Celsius e converte para Fahrenheit, utilizando a fórmula de conversão. Em seguida, 
//imprime o resultado na tela com duas casas decimais.
