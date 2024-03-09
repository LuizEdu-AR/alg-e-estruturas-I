#include <stdio.h> //printf, scanf
#include <stdlib.h> // Funções malloc, calloc, free, exite

int main(void){
    int tamanho = 5;
    int cont;
    int * vetor = (int*) malloc(tamanho*sizeof(int));

    if(vetor == NULL){
        exit(1); //Aborta a execução do programa;
    } else {
        printf("Alocacao realizada com sucesso! \n");
    }

    // Ler os dados do vetor
    
    printf("Digite os valores do vetor: \n");
    for(cont = 0; cont < tamanho;  cont++){
        scanf("%d", &vetor[cont]); //vou cadastrar os dados em cada endereço que tá sendo lido
        // ou scanf("%d", vetor+cont);
    }
    
    free(vetor);
}