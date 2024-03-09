#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linhasA, colunasA, linhasB, colunasB, i, j, k;
    printf("Entre com o numero de linhas e colunas da matriz A: \n");
    scanf("%d %d", &linhasA, &colunasA);
    printf("Entre com o numero de linhas e colunas da matriz B: \n");
    scanf("%d %d", &linhasB, &colunasB);

    if(colunasA != linhasB){
        printf("As matrizes nao podem ser multiplicadas. \n");
        return 0;
    }

    int **matrizA = (int**) malloc(linhasA*sizeof(int*));
    for(i=0; i<linhasA; i++){
        matrizA[i] = (int*) malloc(colunasA*sizeof(int));
    }

    int **matrizB = (int**) malloc(linhasB * sizeof(int*));
    for(i = 0; i < linhasB; i++){
        matrizB[i] = (int*) malloc(colunasB*sizeof(int));
    }

    printf("Entre com os valores da matriz A: \n");
    for(i = 0; i < linhasA; i++){
        for(j = 0; j < colunasA; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Entre com os valores da matriz B: \n");
    for(i = 0; i < linhasB; i++){
        for(j = 0; j < colunasB; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    int **matrizC = (int**) malloc(linhasA*sizeof(int*));
    for(i = 0; i < linhasA; i++){
        matrizC[i] = (int*) malloc(colunasB*sizeof(int));
        for(j = 0; j < colunasB; j++){
            matrizC[i][j] = 0; // Inicializando com zero
        }
    }

    for(i = 0; i< linhasA; i++){
        for(j = 0; j < colunasB; j++){
            for(k = 0; k < colunasA; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("A matriz resultante é: \n");
    for(i = 0; i < linhasA; i++){
        for(j = 0; j < colunasB; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para matrizA
    for(i = 0; i < linhasA; i++){
        free(matrizA[i]);
    }
    free(matrizA);

    // Libera a memória alocada para matrizB
    for(i = 0; i < linhasB; i++){
        free(matrizB[i]);
    }
    free(matrizB);

    // Libera a memória alocada para matrizC
    for(i = 0; i < linhasA; i++){
        free(matrizC[i]);
    }
    free(matrizC);

    return 0;
}