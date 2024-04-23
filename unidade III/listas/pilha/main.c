#include "pilha.h"

int main(void){

    // Criando uma pilha
    Pilha * pilha = pilha_cria();

    // Inserindo elementos na pilha
    pilha_push(pilha, 1);
    pilha_push(pilha, 3);
    pilha_push(pilha, 4);

    //imprimindo elementos da pilha
    pilha_imprime(pilha);

    pilha_libera(pilha);
    return 0;
}
