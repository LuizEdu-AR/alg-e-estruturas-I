#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x, y);
}

float calcula2(float x, float y, float (*operacao)(float, float)){
    return (*operacao)(x, y);
}

int main(){
    int resultado = calcula(5, 3, multiplicacao);
    float resultado2= calcula2(5, 2, divisao);
    printf("Resultado: %d \n", resultado);
    printf("Resultado da divisao: %.2f", resultado2);

    return 0;
}