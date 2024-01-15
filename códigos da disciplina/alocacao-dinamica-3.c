#include <stdio.h>
#include <stdlib.h>

int main(void){
    char * nome = (char*) malloc(50*sizeof(char));

    if(nome==NULL){
        exit(1);
    }

    printf("Informe seu nome \n");
    scanf("%[^\n]", nome); //%[^\n] - leia tudo até encontrar um \n
    printf("%s", nome);

    free(nome);


    return 0;
}