#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE* fp;
    int c = 0; //variavel que vai guardar o valor;=

    fp = fopen("entrada.txt","rt");//rt = ler aquivo
   
    if(fp == NULL)// verificação para ver se o arquivo foi criado corretamente
    {
        printf("Erro fatal\n");
        exit(1);    
    }
    else
    {
        c = fgetc(fp); //função para ler um conteudo de caracter
        printf("aquivo criado\nconteudo: %c\n",c); //imprimido o conteudo
    }
    fclose(fp);
    return 0;
}