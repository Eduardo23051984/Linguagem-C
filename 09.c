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

//Neste programa, pedimos ao usu�rio para digitar um n�mero inteiro utilizando a fun��o printf, e lemos a entrada do usu�rio utilizando a fun��o scanf. 
//Em seguida, inicializamos uma vari�vel i com o valor 1 e utilizamos um loop while para imprimir a tabuada do n�mero digitado pelo usu�rio. Enquanto o 
//valor de i for menor ou igual a 10, calculamos o resultado da multiplica��o entre num e i e exibimos a opera��o e o resultado utilizando a fun��o printf, 
//e ent�o incrementamos o valor de i em 1. Quando o valor de i atingir 11, o loop � interrompido.
