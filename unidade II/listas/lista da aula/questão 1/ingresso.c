#include "ingresso.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

struct Ingresso
{
    float preco;
    char local [20];
    char atracao [20];
    int id;
};


//funcao para definir a quantidade de ingressos;

void preencher(dados * i)
{
    printf("===========INGRESSO===========\n");
   
    printf("Digite o preco do ingresso:\n");
    scanf("%f", &i->preco);
   
    printf("Digite o local do ingresso:\n");
    scanf("%s", i->local);

    printf("Digite a atracao:\n");
    scanf("%s", i->atracao);
    
    printf("Adicone um id a este ingresso:\n");
    scanf("%d",&i->id);
    
    printf("==============================\n\n");
}

//2 objetivo: Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
//os valores dos seus campos. Protótipo: void imprime(Ingresso* i) - Feito;


//Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
//novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
//altera_preco(Ingresso* i, float valor) - FEITO;



//Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
//imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
//n, Ingresso* vet) - ;