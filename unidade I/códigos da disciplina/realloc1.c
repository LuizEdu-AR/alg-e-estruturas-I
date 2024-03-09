#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho = 5, novo_tamanho;
    int * vetor = (int*) malloc(tamanho*sizeof(int));

    printf("\n Entre com o novo tamanho do vetor");
    scanf("%d", &novo_tamanho);

    vetor = (int*) realloc(vetor, novo_tamanho*sizeof(int));

    if(vetor == NULL){
        printf("Erro na alocação");
        exit(1);
    } else {
        printf("Alocação com sucesso!");
    }

    free(vetor);
}