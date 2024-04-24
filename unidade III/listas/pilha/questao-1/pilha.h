typedef struct pilha Pilha;

// função que cria uma pilha
Pilha* pilha_cria(void); 

// função que insere um elemento em uma pilha
void pilha_push(Pilha* pilha, float variavel); 

// função que remove o último item da pilha
float pilha_pop(Pilha* pilha);

// função que verifica se a pilha está vazia
int pilha_vazia(Pilha* pilha);

// função que libera dinamicamente a pilha
void pilha_libera(Pilha* pilha);

// função que imprime os elementos da pilha
void pilha_imprime(Pilha* pilha);