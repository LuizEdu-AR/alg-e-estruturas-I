#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    int id;
    char nome[20];
    float salario;
}Funcionario;

void preenche_arquivo(){
    FILE * entrada = fopen("funcionarios.txt", "w");
    
    if(entrada == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    Funcionario funcionario;

    printf("Digite o id do funcionario: ");
    scanf("%d", &funcionario.id);
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", funcionario.nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario.salario);

    fprintf(entrada, "ID: %d\n", funcionario.id);
    fprintf(entrada, "Nome: %s\n", funcionario.nome);
    fprintf(entrada, "Salario: %.2f\n", funcionario.salario);

    fclose(entrada);
}

int main(){
    preenche_arquivo();
    return 0;
}