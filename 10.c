#include <stdio.h>

int main() {
    char nome[70];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olah, %s! Voce tem %d anos.", nome, idade);

    return 0;
}

//começa solicitando ao usuário que digite o nome e a idade. Em seguida, a função printf exibe uma saudação 
//personalizada com as informações inseridas.
