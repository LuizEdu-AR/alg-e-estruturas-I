#include <stdio.h>

int *cria_variavel(){
    int variavel = 5;

    return &variavel; //essa é uma função que retorna um ponteiro
}

int main(){
    int *ponteiro  = cria_variavel();
    printf("Valor da variável: %d", *ponteiro);
    
    return 0;
}