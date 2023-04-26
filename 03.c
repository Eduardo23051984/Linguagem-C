#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d eh par.", num);
    } else {
        printf("%d eh impar.", num);
    }
    
    return 0;
}

// Neste programa, pedimos ao usuário para digitar um número utilizando a função printf, e lemos a entrada do usuário utilizando a função scanf. 
//Em seguida, verificamos se o número é divisível por 2, utilizando o operador %, que retorna o resto da divisão entre dois números. 
//Se o resto for 0, o número é par, caso contrário, é ímpar. Finalmente, utilizamos a função printf para exibir uma mensagem informando se 
//o número é par ou ímpar.
