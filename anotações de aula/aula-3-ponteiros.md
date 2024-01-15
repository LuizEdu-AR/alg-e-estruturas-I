# Alocação dinâmica
- Vamos reservar a memória dinâmicamente;
- Vetor é uma "matriz" de uma dimensão;
- Permite que os programadores armazenem e acessem dados de forma eficiente;

## Alocação estática

        int main(){
            int vetor[3] = {2, 4, 6};
            return 0;
        }

        - Neste caso temos uma alocação estática de memória, pois não é possível aumentar ou diminuir o
        tamanho da memória alocada de uma variável;

## Alocação dinâmica
### Função "malloc()"

- Retorna um endereço;

- A função malloc() em C, que significa alocação de memória, é usada para alocar um bloco de memória dinamicamente. Ela faz parte da biblioteca stdlib.h e recebe como argumento números inteiros positivos (size_t), que representam o número de bytes que serão alocados;

- A função retorna um ponteiro contendo o endereço do bloco de memória alocado1. Este ponteiro retornado geralmente é do tipo void, pois a função malloc() pode ser usada para declarar qualquer tipo de dado, seja int, float, double ou uma struct criada por você;

        #include <stdlib.h>

        int main(void){
        int * vetor = malloc(3*sizeof(int)); // A função malloc vai retornar o endereço do primeiro elemento do vetor
    
    
        if(vetor == NULL){ //Não foi possível alocar e preciso abortar o processo
            printf("Erro na alocacao de memoria \n");
            exit(1);
        } else {
            printf("Alocacao bem sucedida \n");
        }
        free(vetor); // Sempre preciso limpar/esvaziar o vetor
        return 0;
        }
    
# Sempre depois de usar o vetor é preciso esvazialo e para isso usamos o - free(nome_da_variável)

## Função "calloc()"

- Reserva um espaço de memória e inicializa o vetor com zeros;

- Garante que não vai haver nenhum LIXO nas posições do vetor;

- A função calloc() em C, que significa alocação contígua, é usada para alocar um bloco de memória dinamicamente. Ela faz parte da biblioteca stdlib.h e recebe como argumentos dois números inteiros positivos (size_t), que representam a quantidade de elementos que serão alocados e o tamanho em bytes de cada elemento;

- A função retorna um ponteiro contendo o endereço do bloco de memória alocado1. Este ponteiro retornado geralmente é do tipo void, pois a função calloc() pode ser usada para declarar qualquer tipo de dado, seja int, float, double ou uma struct criada por você;

## Função "realloc()"

- É feita para realocar o tamanho da memória de um vetor seja para mais ou para menos;

