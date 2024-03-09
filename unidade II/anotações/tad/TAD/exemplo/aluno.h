//definição de novo tipo: Aluno;
typedef struct aluno Aluno;

//função que aloca memoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro para Aluno;
Aluno * recebe_dados(void);

//função que imprime os dados dos estudantes;
void imprime_dados(Aluno * estudante);

//função que irar limpar os dados;
Aluno * limpardados(void);