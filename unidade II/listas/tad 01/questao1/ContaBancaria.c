#include "ContaBancaria.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct ContaBancaria
{
    char titular[50];
    int numero;
    float saldo;
};

Conta * criaConta(char titular[50], int numero, float saldo){

    Conta * conta = (Conta *) malloc(sizeof(Conta));

    strcpy(conta->titular, titular);
    conta->numero = numero;
    conta->saldo = saldo;

    return conta;

}

void exibeConta(Conta* conta){
    printf("nome:\t %s\n", conta->titular);
    printf("numero:\t %d\n", conta->numero);
    printf("saldo:\t %.2f\n", conta->saldo);
}

void deposita (Conta * conta, float valor){
    conta->saldo = conta->saldo + valor;
}

int verifica(Conta * conta, float valor){
    if ((conta->saldo) < valor){
        printf("saldo insuficiente\n");
        return 0;
    } else {
        return 1;
    }
}

void saca (Conta * conta, float valor){
    if (verifica(conta, valor) == 1){
        conta->saldo = conta->saldo - valor;
    }
}

void transfere(Conta * origem, Conta * destino, float valor){

    if (verifica(origem, valor) == 1){
        saca(origem, valor);
        deposita(destino, valor);

        printf("Transferencia realizada\n");
    }else{
        printf("Transferencia nao realizada\n");
    }
}

void saldo(Conta * conta){
    printf("O saldo da conta é %.2f\n", conta->saldo);
}

void excluiConta(Conta * conta){
    free(conta);
}