#include <stdio.h>  
#include <stdlib.h>

void adiciona_numeros(){
    FILE * entrada = fopen("entrada_q2.txt", "w");
    
    if (entrada == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    int numero;
    // adicionando 10 numeros ao arquivo
    for(int contador = 0; contador < 10; contador++){
        printf("Digite o numero %d: ", contador+1);
        scanf("%d", &numero);
        fprintf(entrada, "%d\n", numero);
    }

    printf("Numeros adicionados com sucesso!\n");
    fclose(entrada);
}

void preenche_vetor(FILE * entrada, int * vetor){
    int contador = 0;
    while(fscanf(entrada, "%d\n", &vetor[contador]) != EOF){
        contador++;
    }
}

void menor_numero(int * vetor, FILE * saida){
    int contador;
    int menor = vetor[0];
    for(contador = 0; contador < 10; contador++){
        if(vetor[contador] < menor){
            menor = vetor[contador];
        }
    }
    fprintf(saida, "Menor elemento: %d\n", menor);
}

void maior_numero(int * vetor, FILE * saida){
    int contador;
    int maior = vetor[0];
    for(contador = 0; contador < 10; contador++){
        if(vetor[contador] > maior){
            maior = vetor[contador];
        }
    }
    fprintf(saida, "Maior elemento: %d\n", maior);
}

void media(int * vetor, FILE * saida){
    int contador;
    int soma = 0;
    for(contador = 0; contador < 10; contador++){
        soma += vetor[contador];
    }
    fprintf(saida, "Media: %f\n", (float)soma/10);
}

int main(void){
    int vetor[10];
    FILE * entrada = fopen("entrada_q2.txt", "r");
    FILE * saida = fopen("saida_q2.txt", "w");

    if (entrada == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    adiciona_numeros();
    preenche_vetor(entrada, vetor);
    menor_numero(vetor, saida);
    maior_numero(vetor, saida);
    media(vetor, saida);


    printf("Numeros copiados com sucesso!\n");
    fclose(entrada);
    fclose(saida);
    return 0;
}