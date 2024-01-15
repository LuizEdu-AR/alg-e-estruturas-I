#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    //Disciplina materias; //Aninhamento da estrutura disciplina na estrutura aluno
    Disciplina * materias;
}Aluno;

int main(void){
    Aluno *aluno = (Aluno*) malloc(sizeof(Aluno)); //Declarado uma variável do tipo aluno
    if(aluno == NULL){
        exit(1);
    }

    //cadastro de no máximo 2 disciplinas
    aluno -> materias = (Disciplina*) malloc(2*sizeof(Disciplina));
    if(aluno -> materias == NULL){
        exit(1);
    }

    printf("informe os dados do aluno: \n");
    scanf(" %[^\n]", aluno -> nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);

    // Cadastro das disciplinas
    int index;

    for(index = 0; index < 2; index++){
        printf("Cadastro de disciplinas %d : \n", index+1);
        printf("Informe o nome: \n");
        scanf(" %[^\n]", aluno->materias[index].nome);
        printf("Informe a nota: \n");
        scanf("%f", &aluno->materias[index].nota);
        printf("Informe o codigo: \n");
        scanf("%d", &aluno->materias[index].codigo);
    }
    //Agora vou imprimir
    for(index = 0; index < 2; index++){
        printf("Disciplina %d : \n", index+1);
        printf("Nome: %s\nNota: %f\nCodigo: %d\n", aluno->materias[index].nome, aluno->materias[index].nota,
        aluno->materias[index].codigo);
    }

    //printf("%d %d %d \n", aluno.idade, aluno.matricula, aluno.materias.codigo);


    return 0;
}

//EXEMPLO DE ANINHAMENTO DE ESTRUTURAS