#include <stdio.h>
#include <stdlib.h>

int main(void){
    float number = 7.890; //Aqui eu declarei uma variável do tipo real
    int * pointer; //Aqui eu declarei uma variável do tipo inteiro 

    pointer = &number; /*Aqui eu estou atribuindo o valor da variável number para o meu ponteiro pointer,
    mas note que ambus são de tipos distintos*/

    pointer = (int*) &number; //Aqui por sua vez eu forço o meu ponteiro a mudar o tipo da variável number
    //de float para int

    printf("Valor de number: %.3f \n ", number);
    printf("valor de pointer inicialmente: %p \n ", pointer);

    return 0;
}