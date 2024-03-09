#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE* fp;
    char* c[20]; //variavel que vai guardar o valor;=
    
    fp = fopen("entrada.txt","rt");//rt = ler aquivo
    if(fp == NULL)// verificação para ver se o arquivo foi criado corretamente
    {
        printf("Erro em criar ao criar o arquivo\n");
        exit(1);    
    }
    else
    {
        fgets(c,20,fp); //função para ler um conteudo de caracter
        printf("aquivo criado\nconteudo: %s\n",c); //imprimido o conteudo
    }
    
    fclose(fp);
    return 0;
}