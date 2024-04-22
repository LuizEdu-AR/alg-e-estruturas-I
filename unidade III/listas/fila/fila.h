// Cabeçalho da fila

// Estrutura da fila
typedef struct fila Fila;

// Função para criar uma fila
Fila *CriaFila(int MAX_SIZE);

// Função para destruir a fila
void DestruirFila(Fila **Q);

// Função para verificar se a fila está vazia
int FilaVazia(Fila *Q);

// Função para verificar se a fila está cheia
int FilaCheia(Fila *Q);

// Função para inserir um elemento na fila
int InsereFila(Fila *Q, int elem);

// Função para remover um elemento da fila
int ConsultaFila(Fila *Q, int *elem);