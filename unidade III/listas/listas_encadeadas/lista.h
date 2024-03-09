// Cabeçalho da lista encadeada
typedef struct lista Lista;

/* Função que inicializa a lista atribuindo NULL
Retorno: 
    Lista inicializada*/
Lista* cria_lista(void);

/* Função que insere um elemento na lista
Argumentos: 
    Lista e valor a ser inserido
Retorno: 
    Lista com o valor inserido*/
Lista* insere_elemento(Lista* lista, int valor);

/* Função que imprime a lista
Argumentos: 
    Lista
Retorno:
    Nada*/
void imprime_lista(Lista* lista);

/* Função que retira o elemento da lista (em todas as ocorrências)
Argumentos: 
    Lista e valor a ser retirado
Retorno:
    Lista com o valor retirado*/
Lista * retira_elemento(Lista * lista, int valor);


/* Função que conta quantos elementos da lista são maiores que um valor
Argumentos: 
    Lista e valor a ser comparado
Retorno:
    Quantidade de elementos maiores que o valor*/
int maiores(Lista* lista, int valor);

/* Função que retorna o último elemento da lista
Argumentos: 
    Lista
Retorno:
    Último elemento da lista*/
Lista * ultimo(Lista* lista);


/* Função que concatena duas listas
Argumentos: 
    Duas listas
Retorno:
    Lista concatenada*/
Lista * concatena(Lista* lista1, Lista* lista2);