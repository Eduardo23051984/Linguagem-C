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

//Neste programa, pedimos ao usuário para digitar um número real utilizando a função printf, e lemos a entrada do usuário utilizando a função scanf. 
//Em seguida, utilizamos a função floor da biblioteca math.h para arredondar o número para baixo e obter sua parte inteira. Como a função floor 
//retorna um valor do tipo double, é necessário fazer um cast para o tipo int para obter a parte inteira como um número inteiro. Por fim, exibimos a 
//parte inteira do número utilizando a função printf.
