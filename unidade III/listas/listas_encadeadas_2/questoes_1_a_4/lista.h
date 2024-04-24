/* TAD: lista de inteiros */
typedef struct lista2 Lista2;

//cria uma lista vazia
Lista2* lst2_cria(void);

//libera a lista
void lst2_libera(Lista2* l);

//insere um elemento no início da lista
Lista2* lst2_insere(Lista2* l, int v);

//retira um elemento da lista
Lista2* lst2_retira(Lista2* l, int v);

//verifica se a lista está vazia
int lst2_vazia(Lista2* l);

//busca um elemento na lista
Lista2* lst2_busca(Lista2* l, int v);

//imprime os elementos da lista
void lst2_imprime(Lista2* l);

void lcirc_imprime(Lista2* l);