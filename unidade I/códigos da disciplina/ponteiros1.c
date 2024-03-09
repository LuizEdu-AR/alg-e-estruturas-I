#include <stdio.h>

int main(void){
    int valor = 2;
    int * ponteiro; //só declarei a variável ponteiro
    ponteiro = &valor;


    printf("%d , end = %p", valor, ponteiro);

    return 0;
}