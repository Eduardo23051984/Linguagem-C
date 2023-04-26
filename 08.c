#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 1.8) + 32;
    
    printf("A temperatura em Fahrenheit eh: %.2f", fahrenheit);
    
    return 0;
}

//Para converter graus Celsius para Fahrenheit, podemos utilizar a seguinte f�rmula: F = (C * 1.8) + 32
//l� a temperatura em graus Celsius e converte para Fahrenheit, utilizando a f�rmula de convers�o. Em seguida, 
//imprime o resultado na tela com duas casas decimais.
