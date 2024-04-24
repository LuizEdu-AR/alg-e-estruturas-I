// escreva um programa que manipula listas de objetos geométricos planos para cálculo de áreas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct retangulo {
    float base;
    float altura;
};

struct circulo {
    float raio;
};

struct triangulo {
    float base;
    float altura;
};

struct lista {
    float info;
    struct lista *prox;
};

static float retangulo_area(struct retangulo *r) {
    return r->base * r->altura;
}

static float circulo_area(struct circulo *c) {
    return 3.14 * c->raio * c->raio;
}

static float triangulo_area(struct triangulo *t) {
    return (t->base * t->altura) / 2;
}

static float area (struct lista *p) {
    float area = 0;
    struct lista *aux = p;
    while (aux != NULL) {
        if (aux->info == 1) {
            struct retangulo *r = (struct retangulo *) aux->prox;
            area += retangulo_area(r);
        } else if (aux->info == 2) {
            struct circulo *c = (struct circulo *) aux->prox;
            area += circulo_area(c);
        } else if (aux->info == 3) {
            struct triangulo *t = (struct triangulo *) aux->prox;
            area += triangulo_area(t);
        }
        aux = aux->prox->prox;
    }
    return area;
}

float Max_Area (struct lista *p) {
    float max = 0;
    struct lista *aux = p;
    while (aux != NULL) {
        if (aux->info == 1) {
            struct retangulo *r = (struct retangulo *) aux->prox;
            if (retangulo_area(r) > max) {
                max = retangulo_area(r);
            }
        } else if (aux->info == 2) {
            struct circulo *c = (struct circulo *) aux->prox;
            if (circulo_area(c) > max) {
                max = circulo_area(c);
            }
        } else if (aux->info == 3) {
            struct triangulo *t = (struct triangulo *) aux->prox;
            if (triangulo_area(t) > max) {
                max = triangulo_area(t);
            }
        }
        aux = aux->prox->prox;
    }
    return max;
}


int main(){
    //Adicionando as areas na lista
    struct lista *p = (struct lista *) malloc(sizeof(struct lista));
    p->info = 1;
    struct retangulo *r = (struct retangulo *) malloc(sizeof(struct retangulo));
    r->base = 2;
    r->altura = 3;
    p->prox = (struct lista *) r;
    
    struct lista *p2 = (struct lista *) malloc(sizeof(struct lista));
    p2->info = 2;
    struct circulo *c = (struct circulo *) malloc(sizeof(struct circulo));
    c->raio = 2;
    p2->prox = (struct lista *) c;
    p->prox->prox = p2;

    struct lista *p3 = (struct lista *) malloc(sizeof(struct lista));
    p3->info = 3;
    struct triangulo *t = (struct triangulo *) malloc(sizeof(struct triangulo));
    t->base = 2;
    t->altura = 3;
    p3->prox = (struct lista *) t;
    p2->prox->prox = p3;
    
    printf("Area total: %.2f\n", area(p));  
    printf("Maior area: %.2f\n", Max_Area(p));
    return 0;
    
}
