#include <stdio.h>

int main() {
    int a,ant,suc;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    ant = a - 1;
    
    suc = a + 1;
    
    printf("O antecessor eh: %d\n", ant);
    printf("O sucessor eh: %d", suc);
    
    return 0;
}

//Calcula o antecessor e o sucessor de um número inteiro e exibe os resultados na tela. Ele usa as variáveis a, ant e suc para armazenar os 
//valores do número digitado, antecessor e sucessor, respectivamente. As funções printf() e scanf() são usadas para interagir com o usuário.
