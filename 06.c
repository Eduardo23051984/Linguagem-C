#include <stdio.h>
#include <math.h>

int main() {
    double num;
    
    printf("Digite um numero real: ");
    scanf("%lf", &num);
    
    int parte_inteira = (int) floor(num);
    
    printf("A parte inteira de %.2lf eh %d", num, parte_inteira);
    
    return 0;
}

//Neste programa, pedimos ao usu�rio para digitar um n�mero real utilizando a fun��o printf, e lemos a entrada do usu�rio utilizando a fun��o scanf. 
//Em seguida, utilizamos a fun��o floor da biblioteca math.h para arredondar o n�mero para baixo e obter sua parte inteira. Como a fun��o floor 
//retorna um valor do tipo double, � necess�rio fazer um cast para o tipo int para obter a parte inteira como um n�mero inteiro. Por fim, exibimos a 
//parte inteira do n�mero utilizando a fun��o printf.
