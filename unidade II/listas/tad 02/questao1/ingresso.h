/*Definindo um novo tipo: Ingresso*/
typedef struct ingresso Ingresso;

/*Função que preenche os dados de um ingresso, retorna um ponteiro para Ingresso*/
void preenche(Ingresso * i);

/*Função que imprime os dados de um ingresso, recebe um ponteiro para Ingresso*/
void imprime(Ingresso * i);

/*Função que altera o preço de um ingresso, recebe um ponteiro para Ingresso e um valor float*/
void altera_preco(Ingresso * i, float valor);

/*Função que imprime o maior e o menor preço dos ingressos, recebe um inteiro e um vetor de Ingresso*/
void imprime_maior_e_menor(int n, Ingresso * vet);