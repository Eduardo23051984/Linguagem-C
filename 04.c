#include <stdio.h>

int main() {
    float a, b, c, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    media = (a+b+c) / 3;

    printf("A media aritmetica dos tres numeros eh: %f", media);

    return 0;
}

//O programa lê três números e calcula a média aritmética entre eles. Em seguida, imprime o resultado na tela.
