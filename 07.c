#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce eh adulto!\n");
    } else {
        printf("Voce eh menor de idade!\n");
    }

    return 0;
}

//l� a idade digitada pelo usu�rio e, em seguida, faz uma verifica��o atrav�s do comando if. Caso a idade seja maior ou igual a 18 anos, 
//� exibida a mensagem "Voce eh adulto!". Caso contr�rio, � exibida a mensagem "Voce eh menor de idade!".
