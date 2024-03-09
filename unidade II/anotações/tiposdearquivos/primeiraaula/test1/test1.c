#include <stdio.h>
#include <stdlib.h>


int main()
{

   FILE* fp;//FILE é um tipo de variavel em c para trabalhar com arquivos;

    fp = fopen("entrada.txt","rt");//fope 
    if(fp == NULL)
    {
        printf("Erro fatal\n");
        exit(1);
    }
    else
    {
        printf("aquivo criado\n");
    }
    fclose(fp);
    return 0;   
}