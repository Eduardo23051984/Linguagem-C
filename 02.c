#include <stdio.h>

#define PI 3.14159 // Definindo o valor de pi como constante

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo e: %f", area);

    return 0;
}



//Calcula a �rea de um c�rculo a partir do valor do raio fornecido pelo usu�rio e exibe o resultado na tela. 
//Usa a constante PI para fazer o c�lculo da �rea e as fun��es printf() e scanf() para interagir com o usu�rio.
