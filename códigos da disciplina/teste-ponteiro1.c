#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number = 890;
    int * pointer = &number;
    int pi = *pointer;

    printf("Valor de number: %d \n", number); /*Aqui vai apresentar o valor com que a variável number
    está sendo inicializada, no caso, 890*/
    printf("Valor de pointer: %d %p \n", &pointer); /*Neste segundo printf vai ser dado o comando para
    exibir o não mais o valor de number que está sendo lindo em pointer, mas o endereço da célula de
    memória em que number está contido*/
    printf("Valor de pi: %d \n", pi); /*Neste caso em questão por na declaração de varíaveis o "*", estar
    no escopo de atribuição, ao invés de ser apresentado o endereço da célula de memória, vai ser exibido
    o conteúdo guargado dentro do ponteiro, pointer*/
    *pointer = 7894; //Aqui neste caso estamos modificando o conteúdo do ponteiro, pointer
    printf("Valor novo de pointer: %d ", *pointer);

    
    return 0;
}