#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct lista
{
    int informacao;
    Lista * ProximoElemento;
};

Lista* cria_lista(void)
{
    return NULL;
}

Lista * insere__elementos(Lista * lista, int valor)
{   
    //alocando memoria;
    Lista * novo_no = (Lista*)malloc(sizeof(Lista));
   
    //verificação de alocação de memoria
    if(novo_no == NULL)
    {
        exit(1);
    }

    //adiciona um novo valor na lista
    novo_no->informacao = valor;
    //conecta o novo nó a lista
    novo_no->ProximoElemento = lista;

    return novo_no;
}

void imprime(Lista * lista)
{
    Lista * contador;

    for(contador = lista; contador != NULL; contador = contador->ProximoElemento ){
        printf("Numero: %d\n",contador->informacao);
    }
}

int verificalista(Lista * lista){

    if(lista == NULL){
        printf("A lista está vazia\n");
        return 1;
    }
    else{
        printf("A lista não está vazia\n");
        return 0;
    }
}

Lista * BuscarLista(Lista * lista, int Valor)
{
    Lista * busca;

    for(busca = lista; busca != NULL; busca = busca->ProximoElemento)
    {
        if(busca->informacao == Valor)
        {
            printf("valor encontrado!\n");
            return busca;
        }
    }

}   