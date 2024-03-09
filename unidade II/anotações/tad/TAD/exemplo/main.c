#include "aluno.h"

int main()
{
    Aluno *aluno;

    aluno = recebe_dados();

    imprime_dados(aluno);

    free(aluno);
}
