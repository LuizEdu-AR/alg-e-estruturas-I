#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct Lista {
    No* inicio;
} Lista;

void lcirc_imprime(Lista* l) {
    if (l == NULL || l->inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* atual = l->inicio;
    do {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    } while (atual != l->inicio);
    printf("\n");
}

int main() {
    Lista lista;
    lista.inicio = NULL;

    No no1, no2, no3;
    no1.valor = 1;
    no2.valor = 2;
    no3.valor = 3;

    no1.proximo = &no2;
    no2.proximo = &no3;
    no3.proximo = &no1;

    lista.inicio = &no1;

    lcirc_imprime(&lista);

    return 0;
}


// Não usei tad para a lista por causa do tamanho do código, mas poderia ter sido feito.
// A estrutura principal do código é a definição da estrutura No, que representa um nó da lista. Cada nó possui um valor e um ponteiro para o próximo nó na lista. A estrutura Lista é definida para manter o ponteiro para o início da lista.

// Na função lcirc_imprime, a lista circular é percorrida e cada valor de nó é impresso na saída padrão. O ponteiro atual é inicializado com o ponteiro para o início da lista. Em seguida, um loop do-while é usado para percorrer a lista até que o ponteiro atual seja igual ao ponteiro para o início da lista novamente. Dentro do loop, o valor do nó atual é impresso e o ponteiro atual é atualizado para apontar para o próximo nó na lista. Esse processo é repetido até que todos os nós da lista sejam percorridos.

// Na função main, uma instância da estrutura Lista é criada e o ponteiro inicio é inicializado como NULL. Em seguida, três instâncias da estrutura No são criadas, cada uma com um valor diferente. Os ponteiros proximo de cada nó são configurados para apontar para o próximo nó na lista circular. Por fim, o ponteiro inicio da lista é configurado para apontar para o primeiro nó.

// A função lcirc_imprime é chamada para imprimir os valores da lista circular. Em seguida, o valor de retorno da função main é definido como 0, indicando que o programa foi executado com sucesso.