# Aula de ponteiro aula 2
- Para declararmos o ponteiro de um ponteiro, que seria um ponteiro que guarda o endereço de outro ponteiro, fazemos uso do préfixo - "**";

        float y = 5.0;
        float *p =y
        float **pp;
        pp = &p;
        **pp = 4;

        - No caso da linha 8 nós estariamos acessando com o primeiro "*", o conteúdo de p, e com o outro "*" o conteúdo de p que no caso é y e mudariamos o valor de y de 5.0 para 4.0;
        - Estariamos acessando de forma indireta o conteúdo de y;

# Usando função com ponteiro

        !CUIDADO - a linguagem C é lida de cima para baixo e da esquerda para a direita:

                                     return ++num != num++
        
        No primeiro caso o incremento é feito antes de retornar;

# Ponteiro para função
- Os ponteiros de função são usadas para apontar para uma função específica, permitindo que a função possa ser chamada diretamente;
- Armazena o endereço de uma função; 

        #include <stdio.h>

        int incrementa(int valor){
            return ++valor;
        }
        
        int (*inc)(int) = incrementa; - Acabei de criar um ponteiro para minha função que quero criar um ponteiro;

        -Meu segundo () eu coloco os tipos de todos os paramentro que a função para o qual o ponteiro está sendo criado tem;
        -No caso deste exemplo ele vai guardar o enedereço de toda a função;

        ! O PONTEIRO TEM QUE SER DO MESMO TIPO QUE A FUNÇÃO;
        ! QUANDO É PONTEIRO PARA FUNÇÃO PRECISA ESTAR ENTRE ();
