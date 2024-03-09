#include <stdio.h>
#include <stdlib.h>

typedef struct dados
{
    char nome[23];
    float salario;
    int id;
}funcionarios;

void preencher(funcionarios * informacao)
{
    printf("Qual o nome do funcionario?\nNOME: ");
    scanf("%s",informacao->nome);
    printf("\n");
    printf("Quanto o funcionario ganha?\nSALARIO: ");
    scanf("%f",&informacao->salario);
    printf("\n");
    printf("Digite o novo id do funcionario: ");
    scanf("%d",&informacao->id);
    printf("\n");
}

void imprimir(funcionarios * imprim_informacao)
{
    printf("DADOS\n");
    printf("NOME: %s\n",imprim_informacao->nome);
    printf("SALARIO: %.2f\n",imprim_informacao->salario);
    printf("ID: %d\n",imprim_informacao->id);
}

int main()
{
    funcionarios * dados;
    FILE * arquivo = fopen("saida.txt","wt");

    if(arquivo == NULL)
    {
        printf("falha ao criar o arquivo");
    }
    
    dados = (funcionarios*)malloc(sizeof(funcionarios));

    if(dados == NULL)
    {
        printf("Não foi possivel realizar esta opecacao..\n");
        exit(1);
    }

    preencher(&*dados);
    imprimir(&*dados);

    fprintf(arquivo,"Dados\nNome: %s\nSalario: %.2f\nId: %d\n", dados->nome, dados->salario, dados->id);

    return 0;
}