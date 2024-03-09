#include "operacao.h"
#include <stdio.h>

int soma(float *numero1, float *numero2)
{
    float resultado;
    resultado = *numero1 + *numero2;
    return resultado;
}

int subtracao(float *numero1, float *numero2)
{
    float resultado;
    resultado = *numero1 - *numero2;
    return resultado;
}

int multiplicacao(float *numero1, float *numero2)
{
    float resultado;
    resultado = *numero1 * *numero2;
    return resultado;
}

int divisao(float *numero1, float *numero2)
{
    float resultado;
    resultado = *numero1 / *numero2;
    
    if(*numero1 || *numero2)
    {
        printf("Erro, a divisão não funciona com zero");
    }
    return resultado;
}

int potenciacao(float *numero1, int *quantidade)
{
    float resultado;
    resultado = (*numero1 * *numero1) * *quantidade;
    return resultado;
}