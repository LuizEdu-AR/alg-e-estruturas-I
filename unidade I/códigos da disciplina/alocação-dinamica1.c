#include <stdlib.h>

int main(void){
    int * vetor = malloc(3*sizeof(int)); // A função malloc vai retornar o endereço do primeiro elemento do vetor
    
    
    if(vetor == NULL){
        printf("Erro na alocacao de memoria \n");
        exit(1);
    } else {
        printf("Alocacao bem sucedida \n");
    }
    free(vetor);
    return 0;
}