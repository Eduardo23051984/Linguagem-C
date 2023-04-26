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

//lê a idade digitada pelo usuário e, em seguida, faz uma verificação através do comando if. Caso a idade seja maior ou igual a 18 anos, 
//é exibida a mensagem "Voce eh adulto!". Caso contrário, é exibida a mensagem "Voce eh menor de idade!".
