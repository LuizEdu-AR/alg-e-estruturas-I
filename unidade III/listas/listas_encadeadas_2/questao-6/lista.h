typedef struct lista ListaHet;

typedef struct retangulo Retangulo;

typedef struct triangulo Triangulo;

typedef struct circulo Circulo;

ListaHet* cria_ret (float b, float h);

ListaHet* cria_tri (float b, float h);

ListaHet* cria_circ (float r);

static float retangulo_area(struct retangulo *r);

static float circulo_area(struct circulo *c);

static float triangulo_area(struct triangulo *t);

static float area (struct lista *p);

float Max_Area (struct lista *p);
