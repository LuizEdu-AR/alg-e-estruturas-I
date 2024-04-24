#include "lista.c"
#include "lista.h"

int main() {

    ListaFunc lista;
    lista.head = NULL;

    Funcionario f1 = {'A', 1, "João", 2000.0};
    Funcionario f2 = {'B', 2, "Maria", 2500.0};
    Funcionario f3 = {'A', 3, "Pedro", 1800.0};

    Node* node1 = (Node*)malloc(sizeof(Node));
    node1->data = f1;
    node1->next = NULL;

    Node* node2 = (Node*)malloc(sizeof(Node));
    node2->data = f2;
    node2->next = NULL;

    Node* node3 = (Node*)malloc(sizeof(Node));
    node3->data = f3;
    node3->next = NULL;

    lista.head = node1;
    node1->next = node2;
    node2->next = node3;

    char depto = 'A';
    float folhaPagto = lstfunc_folha_pagto(&lista, depto);

    printf("Valor gasto com a folha de pagamento do departamento %c: R$ %.2f\n", depto, folhaPagto);

    Node* current = lista.head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

//Esse código possui as funções: lstfunc_folha_pagto, lstfunc_insere, lstfunc_retira, lstfunc_cria e lstfunc_libera. Na qual são responsaveis por calcular a folha de pagamento, inserir, retirar, criar e liberar a lista de funcionarios respectivamente. Usando a struct funcionario e a struct node, para armazenar os dados dos funcionarios e a lista de funcionarios respectivamente.
//Há o uso de alocação dinâmica de memória para a lista de funcionarios e para os funcionarios. A lista de funcionarios é uma estrutura de dados do tipo FIFO (First In First Out), ou seja, o primeiro elemento a entrar é o primeiro a sair. A lista de funcionarios é implementada com uma lista encadeada simples, onde cada nó aponta para o próximo nó da lista. As funções lstfunc_insere e lstfunc_retira são responsáveis por adicionar e remover funcionarios da lista, respectivamente. A função lstfunc_folha_pagto é responsável por calcular a folha de pagamento de um determinado departamento. A função lstfunc_libera é responsável por liberar a memória alocada para a lista de funcionarios e para os funcionarios.
//A função main cria uma lista de funcionarios, adiciona funcionarios à lista, calcula a folha de pagamento de um determinado departamento, imprime o valor da folha de pagamento e libera a memória alocada para a lista de funcionarios.