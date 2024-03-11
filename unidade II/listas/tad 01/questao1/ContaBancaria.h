typedef struct ContaBancaria Conta;

/*Função que aloca memória para um struct contaBancaria, recebe os dados via teclado e retorna um ponteiro de ContaBancaria*/
Conta* criaConta(char titular[50], int numero, float saldo);

/*Função que exibe os dados da conta*/
void exibeConta(Conta* conta);

/*Função que deposita um valor na conta, recebe um ponteiro de ContaBancaria e um valor como parâmetro*/
void deposita(Conta* conta, float valor);

/*Função que saca um valor da conta, recebe um ponteiro de ContaBancaria e um valor como parâmetro*/
void saca(Conta* conta, float valor);

/*Função que transfere um valor de uma conta para outra, recebe dois ponteiros de ContaBancaria e um valor como parâmetro*/ 
void transfere(Conta* origem, Conta* destino, float valor);

/*Função que imprime o saldo da conta, recebe um ponteiro de ContaBancaria como parâmetro*/
void saldo(Conta* conta);

/*Função que libera a memória, recebe um ponteiro de ContaBancaria como parâmetro*/
void excluiConta(Conta* conta);

/*Função que verifica se o saldo da conta é suficiente para a operação */
int verifica(Conta * conta, float valor);