#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *entrada, *saida;
    int numeros[10];
    int maior,menor;
    int media = 0;
    char linha[40];

    entrada = fopen("entrada_q2.txt","r");
   
    if(entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    saida = fopen("saida_q2.txt", "w");
    
    if(saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saida.\n");
    }
    
    int i = 0;

    while (!feof(entrada))
    {
        fgets(linha,20,entrada);
        
        sscanf(linha,"%d",&numeros[i]);
        printf("Numero %d = %d\n",i + 1, numeros[i]);

        i++;
    }

    printf("\n");
    menor = numeros[0];
    maior = numeros[0];

    for(int ordem; ordem < 10; ordem ++)
    {
        if(numeros[ordem] > maior)
        {
            maior = numeros[ordem];
        }
        if(numeros[ordem] < menor)
        {
            menor = numeros[ordem];
        }
    }

    printf("menor numero: %d\n", menor);
    printf("maior numero: %d\n", maior);

    media = (numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4] + numeros[5] + numeros[6] + numeros[7] + numeros[8] + numeros[9])/10;
    fprintf(saida,"Maior elemento: %d\n Menor elemento: %d\n Media: %d", maior, menor, media);
    return 0;
}