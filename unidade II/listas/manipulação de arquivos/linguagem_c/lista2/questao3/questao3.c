#include <stdio.h>
#include <stdlib.h>

typedef struct fruta{
    char nome[15];
    float preco;
} Fruta;

void preenche_arquivo(){
    FILE * entrada = fopen("frutas.txt", "a");
    
    if(entrada == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    Fruta fruta;

    printf("Digite o nome da fruta: ");
    scanf(" %[^\n]", fruta.nome);
    printf("Digite o preco da fruta: ");
    scanf("%f", &fruta.preco);

    fprintf(entrada, "%s,\t%.2f\n", fruta.nome, fruta.preco);

    fclose(entrada);
}

int main(){
    int quantidade;

    printf("Digite a quantidade de frutas que deseja adicionar: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0){
        printf("Saindo do programa...\n");
        exit(1);
    } else{
        for (int i = 0; i < quantidade; i++){
            preenche_arquivo();
        }
        printf("Fim do cadastro de frutas! Saindo do programa...\n");
    }

    
    return 0;
}