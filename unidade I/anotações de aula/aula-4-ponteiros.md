# Aula 4 - Continuação ponteiros
### A calloc cria o espaço do ponteiro e inicializa o ponteiro colocando em cada espaço zeros

Problema hipotético: Um programa que manipula dados de alunos
- Dados importantes para um aluno = nome, idade, matrícula e e-mail;

        int main(void){
            char nome[20];
            int idade, matricula; //Se caso fosse número maiores eu poderia usar long int - converte para 6 bytes
            char email[50];

            return 0;
        }
#### Melhor que essa forma é usar um STRUCT
- Permite agrupar dados distintos em um único espaço de memória

        struct aluno {
            char nome[20];
            int idade, matricula;
            char email[50];
        }
#
## Ponto "." é uma estrutura de acesso

        struct aluno {
            char nome[20];
            int idade, matricula;
            char email[50];
        };

        int main(void){
            struct aluno a; // o nome da variável é "a", mas do tipo struct aluno
            a.matricula = 202210124;
            a.idade = 20;

            return 0;
        }