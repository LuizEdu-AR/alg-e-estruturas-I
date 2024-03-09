#include <stdio.h>


int main()
{
    int c;
    int nlinhas = 0;
    FILE *fp;
    //abre aquivo para leitura;

    fp = fopen("entrada.txt", "rt");
    if(fp == NULL){
        printf("nao foi possivel abrir o arquivo.\n");
        return 1;
    }
    //le caractere a caractere;
    while((c = fgetc(fp)) != EOF){
        if(c == '\n')
            nlinhas++;
    }
    //exibe resultado na tela;
    printf("Numero de linhas = %d\n",nlinhas);
//
    return 0;
}