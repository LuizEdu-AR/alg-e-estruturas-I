# Tipo estrutura
- Uma estrutura, em C, serve basicamente para agrupar diversas variáveis dentro de um único contexto
- Exemplo: estrutura ponto

        struct ponto{
            float x;
            float y;
        }

- Ponteiro para estrutura

        struct ponto *pp;

        (*pp).x = 12.0;
        pp -> x = 12.0;

- Passagem de estruturas para funções

        int main(void){
                struct ponto p;
                captura(&p); - & por que é um operador de endereço
                imprime(&p);
                return 0;
        }

        int main(void){
                struct ponto *p = malloc(sizeof(struct ponto));
                captura(p);
                imprime(p);
                free(p);
                return 0;
        }

Ambos os códigos acima fazem a mesma coisa, só muda o uso do &

        - unsigned - é uma palavra reservada do c que aumenta a faixa de representação; usigned int, contudo neste caso só será exibido números positivos

# Aninhamento de estruturas
