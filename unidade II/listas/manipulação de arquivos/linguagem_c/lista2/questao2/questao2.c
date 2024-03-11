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

    FILE * entrada = fopen("alunos.txt", "a");

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

int main(){
    int quantidade;

    printf("Digite a quantidade de alunos que deseja adicionar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        adiciona_aluno();
    }
    return 0;
}