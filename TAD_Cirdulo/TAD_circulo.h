#include "../TAD_Ponto/TAD_Ponto.h"

typedef struct circulo Circulo;

void cria_circ(float x, float y, float r);
void libera_circ(Circulo* c);
int inferior_circ(Circulo* c, Ponto* p);
