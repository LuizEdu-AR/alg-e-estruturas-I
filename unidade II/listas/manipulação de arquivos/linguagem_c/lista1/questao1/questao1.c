#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;


void adiciona_aluno(){
    Aluno aluno;

    FILE * entrada = fopen("entrada_q3.txt", "a");

    if (entrada == NULL){ 
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", aluno.nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3);
    
    fprintf(entrada, "%s\t%.1f\t%.1f\t%.1f\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3);
    printf("Aluno adicionado com sucesso!\n");
    fclose(entrada);

}

void calcula_media(FILE * entrada){
    
    Aluno aluno;
    FILE * saida = fopen("saida_q3.txt", "w");

    if (entrada == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    
    while(fscanf(entrada, "%20[^\t]\t%f\t%f\t%f\n", aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3) != EOF){
        
        aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3)/3;
        
        if(aluno.media >= 7){
            fprintf(saida, "%s\t%.1f\taprovado\n", aluno.nome, aluno.media);
        }
        else{
            fprintf(saida, "%s\t%.1f\treprovado\n", aluno.nome, aluno.media);
        }
    }

    printf("Medias calculada com sucesso!\n");
    fclose(saida);
}

int main(void){
    FILE * entrada;
    int opcao;

    entrada = fopen("entrada_q3.txt", "a+");

    if (entrada == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    do{
        printf("====================================\n");
        printf("\tMENU DA TURMA\n");
        printf("====================================\n");

        printf("1 - Adicionar aluno\n");
        printf("2 - Calcular medias\n");
        printf("3 - Sair\n");
        printf("Digite a opcao desejada:");
        scanf("%d", &opcao);
        printf("====================================\n");

        switch(opcao){
            case 1:
                adiciona_aluno();
                break;
            case 2:
                calcula_media(entrada);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }while(opcao != 3);

    fclose(entrada);

    return 0;
}
