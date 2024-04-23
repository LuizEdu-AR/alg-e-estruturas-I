#include "lista2.h"
#include <stdio.h>

int main() {
  Lista2 *lista = lst2_cria(); 

  printf("Inserindo elementos na lista...\n");
  lista = lst2_insere(lista, 10);
  lista = lst2_insere(lista, 20);
  lista = lst2_insere(lista, 30);
  lst2_imprime(lista); 

  printf("\nVerificando se a lista está vazia...\n");
  if (lst2_vazia(lista)) {
    printf("Lista vazia\n");
  } else {
    printf("Lista não vazia\n");
  }

  printf("\nBuscando o elemento 20...\n");
  if (lst2_busca(lista, 20) != NULL) {
    printf("Elemento 20 encontrado\n");
  } else {
    printf("Elemento 20 não encontrado\n");
  } 

  printf("\nRemovendo o elemento 20...\n");
  lista = lst2_retira(lista, 20);
  lst2_imprime(lista);

  printf("\nLiberando a memória da lista...\n");
  lst2_libera(lista);

  return 0;
}




// O código começa com a função main(), que é o ponto de entrada do programa. Dentro dessa função, uma variável chamada lista é declarada e inicializada com o valor retornado pela função lst2_cria(). Essa função cria uma lista vazia e retorna um ponteiro para a estrutura Lista2, que é definida em algum lugar do código.

// Em seguida, o programa imprime a mensagem "Inserindo elementos na lista..." usando a função printf(). Em seguida, três elementos (10, 20 e 30) são inseridos na lista usando a função lst2_insere(). Essa função recebe a lista atual e o valor do elemento a ser inserido, e retorna a lista atualizada com o novo elemento.

// Depois de inserir os elementos, o programa chama a função lst2_imprime() para imprimir o conteúdo da lista. Essa função percorre a lista e imprime cada elemento.

// Em seguida, o programa verifica se a lista está vazia usando a função lst2_vazia(). Essa função retorna verdadeiro se a lista estiver vazia e falso caso contrário. Dependendo do resultado, o programa imprime "Lista vazia" ou "Lista não vazia".

// O programa continua buscando o elemento 20 na lista usando a função lst2_busca(). Essa função retorna um ponteiro para o elemento se ele for encontrado na lista, ou NULL caso contrário. Com base no resultado, o programa imprime "Elemento 20 encontrado" ou "Elemento 20 não encontrado".

// Em seguida, o programa remove o elemento 20 da lista usando a função lst2_retira(). Essa função recebe a lista atual e o valor do elemento a ser removido, e retorna a lista atualizada sem o elemento removido.

// Após remover o elemento, o programa chama novamente a função lst2_imprime() para imprimir o conteúdo atualizado da lista.

// Por fim, o programa libera a memória alocada para a lista usando a função lst2_libera(). Essa função percorre a lista e libera a memória ocupada por cada elemento.