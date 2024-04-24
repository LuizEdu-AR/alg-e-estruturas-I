#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct funcionario {
    char depto; /* departamento */
    int mat; /* matrícula */
    char nome[81];
    float salario;
};

typedef struct funcionario Funcionario;

struct node {
    Funcionario data;
    struct node* next;
};

typedef struct node Node;

typedef struct {
    Node* head;
} ListaFunc;

float lstfunc_folha_pagto(ListaFunc* l, char depto) {
    float total = 0.0;
    Node* current = l->head;

    while (current != NULL) {
        if (current->data.depto == depto) {
            total += current->data.salario;
        }
        current = current->next;
    }

    return total;
}

