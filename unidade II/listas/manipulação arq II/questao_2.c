#include <stdio.h>
#include <stdlib.h>

typedef struct turma
{
    char nome[20];
    float notas[3];
}aluno;

void quantidade(int * quantidade)
{
    printf("quantos alunos serão cadastrados??\nalunos: ");
    scanf("%d",&*quantidade);
}

void preencher(aluno * alunos)
{
    printf("Digite o nome do aluno: ");
    scanf("%s",alunos->nome);

    for(int ordem = 0; ordem < 3; ordem++)
    {
        alunos->notas[ordem] = 0;
        printf("quanto o aluno tirou na %d prova?\nnota: \n",ordem + 1);
        scanf("%f",&alunos->notas[ordem]);
    }
}

void imprimir(aluno * alunos)
{
    printf("DADOS\n\n");
    printf("NOME: %s\n\n",alunos->nome);
    printf("NOTAS:\n");
    for(int ordem = 0; ordem < 3; ordem++)
    {
        printf("%d prova: %.2f \n",ordem + 1, alunos->notas[ordem]);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    quantidade(&n);

    aluno alunos[n];

    FILE *saida;

    saida = fopen("notas.txt","wt");

    if(saida == NULL)
    {
        printf("erro ao criar o aquivo notas\n");
        exit(1);
    }

    for(int ordem = 0; ordem < n;ordem++)
    {
        preencher(&alunos[ordem]);
    }

    for(int ordem = 0; ordem < n;ordem++)
    {
        imprimir(&alunos[ordem]);
    }

    for(int ordem = 0; ordem < n;ordem ++)
    {
        fprintf(saida, "Nome do aluno: %s\n\nNOTAS:\n",alunos[ordem].nome);
        for(int ordemp = 0; ordemp < 3;ordemp ++)
        {
            fprintf(saida,"%d primeira prova: %.2f\n",ordemp + 1, alunos[ordem].notas[ordemp]);
        }
        printf("\n");
    }
    
    return 0;
}