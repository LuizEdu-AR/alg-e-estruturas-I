#include "pilha.h"
#include <stdio.h>

int main(void){

    Pilha * pilha = pilha_cria();

    pilha_push(pilha, 1);
    pilha_push(pilha, 3);
    pilha_push(pilha, 4);
    pilha_push(pilha, 5);
    pilha_push(pilha, 6);

    // testando a realocação
    pilha_push(pilha, 7);

    pilha_imprime(pilha);

    printf("Topo da pilha: %.2f\n", topo(pilha));

    Pilha * pilha2 = pilha_cria();

    pilha_push(pilha2, 8);
    pilha_push(pilha2, 9);
    pilha_push(pilha2, 10);
    pilha_push(pilha2, 11);
    pilha_push(pilha2, 12);
    
    printf("Pilha 2:\n");

    pilha_imprime(pilha2);

    printf("Concatenando pilhas...\n");

    concatena_pilhas(pilha, pilha2);

    printf("Liberando pilha 1: \n");
    pilha_libera(pilha);

    printf("Liberando pilha 2: \n");
    pilha_libera(pilha2);

    return 0;

}

//Esse código possui as funções: pilha_cria, pilha_push, pilha_pop, pilha_vazia, pilha_imprime e pilha_libera. Na qual são responsaveis por criar, adicionar, remover, verificar se a pilha está vazia, imprimir e liberar a pilha respectivamente. Usando a struct pilha e a struct no, para armazenar os dados da pilha e a lista de elementos da pilha respectivamente.
//Há o uso de alocação dinâmica de memória para a pilha e para os elementos da pilha. A pilha é uma estrutura de dados do tipo LIFO (Last In First Out), ou seja, o último elemento a entrar é o primeiro a sair. A pilha é implementada com uma lista encadeada simples, onde cada nó aponta para o próximo nó da pilha. As funções pilha_push e pilha_pop são responsáveis por adicionar e remover elementos da pilha, respectivamente. A função pilha_imprime é responsável por imprimir os elementos da pilha. A função pilha_libera é responsável por liberar a memória alocada para a pilha e para os elementos da pilha.
//A função main cria uma pilha, adiciona elementos à pilha, imprime a pilha, remove elementos da pilha, imprime a pilha novamente e libera a memória alocada para a pilha.
//Há o uso da struct pilha, que contém um vetor de elementos e um inteiro que representa a quantidade de elementos na pilha. A pilha é implementada com um vetor de elementos, onde cada elemento é adicionado ao final do vetor e removido do final do vetor. Quando a capacidade da pilha é atingida, o vetor é realocado com o dobro da capacidade original. A função pilha_push é responsável por adicionar elementos à pilha. A função pilha_pop é responsável por remover elementos da pilha. A função pilha_vazia é responsável por verificar se a pilha está vazia. A função pilha_imprime é responsável por imprimir os elementos da pilha. A função pilha_libera é responsável por liberar a memória alocada para a pilha. A função main cria uma pilha, adiciona elementos à pilha, imprime a pilha, remove elementos da pilha, imprime a pilha novamente e libera a memória alocada para a pilha.