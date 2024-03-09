#include <stdio.h>
#include "operacao.h"


int main()
{
    float num1,num2;
    int escolha,quantidade;

    printf("Escolha uma opecação: 1-soma 2-subtracao 3-multiplicacao 4-divisao 5-potenciacao\nSua escolha: ");
    scanf("%d",&escolha);
    printf("\n");

    switch (escolha)
    {
    case 1:
        printf("digite o primeiro numero: \n digite o segundo numero: \n");
        scanf("%f %f",&num1,&num2);
        multiplicacao(&num1, &num2);
        break;
    case 2:
        printf("digite o primeiro numero: \n digite o segundo numero: \n");
        scanf("%f %f",&num1,&num2);
        subtracao(&num1, &num2);
        break;
    case 3:
        printf("digite o primeiro numero: \n digite o segundo numero: \n");
        scanf("%f %f",&num1,&num2);
        multiplicacao(&num1, &num2);
        break;
    case 4:
        printf("digite o primeiro numero: \n digite o segundo numero: \n");
        scanf("%f %f",&num1,&num2);
        divisao(&num1, &num2);
        break;
    case 5:
        printf("digite o primeiro numero: \n digite o numero da potencia: \n");
        scanf("%f %f",&num1,&num2);
        potenciacao(&num1, &quantidade);
    
    default:
        break;
    }

}