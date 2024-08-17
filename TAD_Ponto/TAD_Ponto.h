typedef struct ponto Ponto; 

Ponto* cria_pnt(float x, float y);
void libera(Ponto* p);
void ponto_acess(Ponto* p, float* x, float* y);
void atribui_pnt(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto* p2);