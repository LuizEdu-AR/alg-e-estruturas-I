/*Cria um novo tipo: Disciplina*/
typedef struct disciplina Disciplina;

/*Função que cria uma disciplina, recebe como parâmetros o nome e o codigo da disciplina e retorna um ponteiro de Disciplina*/
Disciplina * cria_disciplina(char nome[], int codigo);

/*Função que exclui uma disciplina, recebe como parâmetro um ponteiro de Disciplina*/
void exclui_disciplina(Disciplina * d);

/*Função que imprime uma disciplina, recebe como parâmetro um ponteiro de Disciplina*/
void imprime_disciplina(Disciplina * disciplina);