/*Exercício: Aloque dinamicamente uma matriz de inteiros 5x5 e preencha cada
elemento da matriz com o seu respectivo índice (matriz[i][j] = i*5 + j). Em
seguida, imprima a matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linha = 5, colunas = 5, i, j;

    int ** matriz = (int**) malloc(linha*sizeof(int*));

    for(i = 0; i < linha; i++){
        matriz[i] = (int*) malloc(colunas*sizeof(int));
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i*5+j;
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0; i< linha; i++){
        free(matriz[i]); //Primero apago as linhas do vetor
    }

    free(matriz); //Apago o resto da matriz

    return 0;
}