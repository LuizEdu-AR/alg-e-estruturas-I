#include "disciplina.h"

typedef struct aluno Aluno;

Aluno* criaAluno(char nome[], int matricula);

void matriculaAluno(Aluno* aluno, Disciplina* disciplina);

void excluiAluno(Aluno* aluno);
