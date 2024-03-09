
//Adicionando a struct ao nosso arquivo;
typedef struct lista Lista;

//Função que inicia a lista atribuindo Null
Lista * cria_lista(void);

/*
Insere novos elementos na lista;

argumentos:
    Lista * lista;
    int valor;

Retorno:
    nova lista;
*/
Lista * insere__elementos(Lista * lista, int valor);


// função que irar mostrar os numeros da lista;
void imprime(Lista * lista);

//função para verificar se a lista está vazia;
int verificalista(Lista * lista);

//função para buscar um valor na lista;
Lista * BuscarLista(Lista * lista, int Valor);
