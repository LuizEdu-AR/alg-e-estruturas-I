#include <stdio.h>

int inc(int num){

    return ++num;
}

int main(void){
    int num = 5;

    num = inc(num);

    printf("%d", num);

    return 0;
}