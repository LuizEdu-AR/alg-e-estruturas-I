#include "ingresso.c"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int quantidade, contador, opcao;
    float valor;

    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &quantidade);

    Ingresso vetorIngressos[quantidade];

    for (contador = 0; contador < quantidade; contador++){
        preenche(&vetorIngressos[contador]);
    }

    for (contador = 0; contador < quantidade; contador++){
        printf("=============================\n");
        printf("\t Dados do Ingresso %d\n", contador+1 );
        printf("=============================\n");
        imprime(&vetorIngressos[contador]);
    }

    imprime_maior_e_menor(quantidade, vetorIngressos);

    printf("\nDeseja alterar o preco de algum ingresso? (1 - Sim / 0 - Nao) ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Informe o id do ingresso: \t");
        scanf("%d", &opcao);

        // verifica se o id informado é valido
        if (opcao > quantidade || opcao < 0){
            printf("Ingresso nao encontrado, fechando o programa...");
            return 0;
        }

        printf("Informe o novo valor: \t");
        scanf("%f", &valor);

        altera_preco(&vetorIngressos[opcao-1], valor);
        break;

    case 2:
        printf("Fechando o programa...");
        break;
    default:
        printf("Opção invalida. Fechando o programa");
        return 0;
        break;
    }

    // laço de repetição para imprimir os dados dos ingressos
    for (contador = 0; contador < quantidade; contador++){
        printf("=============================\n");
        printf("\t Dados do Ingresso %d\n", contador+1 );
        printf("=============================\n");
        imprime(&vetorIngressos[contador]);
    }

    imprime_maior_e_menor(quantidade, vetorIngressos);

    return 0;

}
