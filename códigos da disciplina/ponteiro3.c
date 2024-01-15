#include <stdio.h>

int *cria_variavel(){
    int variavel = 5;
    return &variavel;
}

int main(void){
    int *ponteiro = cria_variavel();
    printf("valor da variavel: %d", *ponteiro);

    return 0;
}