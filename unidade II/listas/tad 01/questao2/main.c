#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "disciplina.h"

int cabecalho(char titulo[]){
    printf("===========================================================\n");
    printf("\t\t%s\n", titulo);
    printf("===========================================================\n");
}

int main(){
    Aluno * aluno = cria_aluno("Leticia", 123);

    cabecalho("Dados do Aluno(a)");
    imprime_aluno(aluno);
    printf("===========================================================\n\n");

    Disciplina * disciplina1 = cria_disciplina("Estrutura de Dados I", 1234);
    Disciplina * disciplina2 = cria_disciplina("Estrutura de Dados I (noturno)", 1234);
    Disciplina * disciplina3 = cria_disciplina("Geometria Analitica", 1235);
    Disciplina * disciplina4 = cria_disciplina("Arq. e Org. De Computadores", 1236);
    Disciplina * disciplina5 = cria_disciplina("Calculo II", 1238);

    cabecalho("Disciplinas disponiveis");
    imprime_disciplina(disciplina1);
    imprime_disciplina(disciplina2);
    imprime_disciplina(disciplina3);
    imprime_disciplina(disciplina4);
    imprime_disciplina(disciplina5);
    printf("===========================================================\n\n");

    cabecalho("Matriculando aluno(a) nas disciplinas");
    matricula_disciplina(aluno, disciplina1);
    matricula_disciplina(aluno, disciplina2); // testando se o aluno já está nessa disciplina
    matricula_disciplina(aluno, disciplina3);
    matricula_disciplina(aluno, disciplina4);
    matricula_disciplina(aluno, disciplina5);
    printf("===========================================================\n\n");

    cabecalho("Dados do Aluno(a)");
    imprime_aluno(aluno);
    printf("===========================================================\n\n");


    exclui_aluno(aluno);

    exclui_disciplina(disciplina1);
    exclui_disciplina(disciplina2);
    exclui_disciplina(disciplina3);
    exclui_disciplina(disciplina4);
    exclui_disciplina(disciplina5);

    printf("Dados excluidos! Fim do programa\n");
    return 0;
}