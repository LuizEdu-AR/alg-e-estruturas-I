#include "fila.h"
#include <stdio.h>

int main(void){

    Fila * fila = CriaFila(5); // Cria uma fila com 5 elementos

    int vazia = FilaVazia(fila); // Vai verificar se a fila está vazia

    if (vazia == 1){ // Se a fila estiver vazia, vai imprimir a mensagem
        printf("A fila está vazia\n");
    }
    
    InsereFila(fila, 1); // Insese um elemento na fila

    InsereFila(fila, 2); // Insere um elemento na fila

    RemoveFila(fila); // Remove um elemento da fila

    int elemento;

    ConsultaFila(fila, &elemento); // Consulta o elemento da fila

    printf("Elemento Inicial: %d\n", elemento); // Imprime o elemento inicial

    int cheia = FilaCheia(fila); // Verifica se a fila está cheia

    if (cheia == 0){ // Se a fila não estiver cheia, imprime a mensagem
        printf("A fila não está cheia\n");
    }

    DestruirFila(&fila); // Destroi a fila

}