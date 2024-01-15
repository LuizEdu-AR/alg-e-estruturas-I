#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linhas = 3, colunas = 3, i, j;
    //Alocando vetor de ponteiro;
    int **matriz= (int**) malloc(linhas*sizeof(int*)); //matriz é um ponteiro de ponteiro;
    //Como é dois ** ele vai ser um ponteiro que armazena vetores;


    // Alocando cada linha da matriz;
    for(i = 0; i<linhas; i++){
        matriz[i] = (int*) malloc(colunas*sizeof(int));
    }
    //Eu acabo de criar uma matriz 3X3;
    //liberando memória alocada;

    for(i=0; i<linhas; i++){
        free(matriz[i]); //Primero apago as linhas do vetor
    }

    free(matriz); //Apago o resto da matriz

    return 0;
}

//Posso acessar os dados por meio - *(*(matriz+i)+j) ou matriz[i][j];