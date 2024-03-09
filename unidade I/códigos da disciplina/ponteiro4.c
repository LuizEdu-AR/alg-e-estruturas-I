#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return(*operacao)(x, y);
}

int main(){
    int resultado = calcula(5, 3, soma);
    printf("Resultado: %d", resultado);
    return 0;
}