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

// Neste programa, pedimos ao usu�rio para digitar um n�mero utilizando a fun��o printf, e lemos a entrada do usu�rio utilizando a fun��o scanf. 
//Em seguida, verificamos se o n�mero � divis�vel por 2, utilizando o operador %, que retorna o resto da divis�o entre dois n�meros. 
//Se o resto for 0, o n�mero � par, caso contr�rio, � �mpar. Finalmente, utilizamos a fun��o printf para exibir uma mensagem informando se 
//o n�mero � par ou �mpar.
