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

//come�a solicitando ao usu�rio que digite o nome e a idade. Em seguida, a fun��o printf exibe uma sauda��o 
//personalizada com as informa��es inseridas.
