#include <stdio.h>

int main() {
    int num, i = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    printf("Tabuada do %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    
    return 0;
}

//Neste programa, pedimos ao usuário para digitar um número inteiro utilizando a função printf, e lemos a entrada do usuário utilizando a função scanf. 
//Em seguida, inicializamos uma variável i com o valor 1 e utilizamos um loop while para imprimir a tabuada do número digitado pelo usuário. Enquanto o 
//valor de i for menor ou igual a 10, calculamos o resultado da multiplicação entre num e i e exibimos a operação e o resultado utilizando a função printf, 
//e então incrementamos o valor de i em 1. Quando o valor de i atingir 11, o loop é interrompido.
