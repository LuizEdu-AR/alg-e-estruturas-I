#include "ingresso.c"//porque esta em c??
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd = 0;
    dados * ingresso;
    int escolha = 0;

    quantidade(&qtd);

    ingresso = (dados*)malloc(qtd * sizeof(dados));

    for(int ordem = 0; ordem < qtd; ordem ++)
    {
        preencher(&ingresso[ordem]);
    }


    return 0;
}