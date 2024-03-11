#include "disciplina.c"

typedef struct aluno{
    char nome[100];
    int matricula;
    Disciplina disciplina[10];
    int num_disciplinas;
}Aluno;

Aluno * cria_aluno(char nome[], int matricula){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;
    return aluno;
}

void exclui_aluno(Aluno * a){
    free(a);
}

int matricula_disciplina(Aluno * aluno, Disciplina * disciplina){
    int contador;

    printf("Matriculando aluno(a) %s na disciplina %s\n", aluno->nome, disciplina->nome);

    if(aluno->num_disciplinas < 10){
        // verificando se o aluno já foi matriculado na disciplina
        for (contador = 0; contador < aluno->num_disciplinas; contador++){
            if(aluno->disciplina[contador].codigo == disciplina->codigo){
                printf("%s ja esta matriculado(a) na disciplina (codigo: %d)\n",aluno->nome, disciplina->codigo);
                return 0;
            }
        }

        aluno->disciplina[aluno->num_disciplinas] = *disciplina;
        aluno->num_disciplinas++;
    
    }
}

void imprime_aluno(Aluno * aluno){
    int contador;
    printf("Nome:\t\t%s\n", aluno->nome);
    printf("Matricula:\t%d\n", aluno->matricula);
    printf("Disciplinas matriculadas:\t%d\n", aluno->num_disciplinas);
    for(contador = 0; contador < aluno->num_disciplinas; contador++){
        printf("\n");
        imprime_disciplina(&aluno->disciplina[contador]);
    }
    printf("\n");
}