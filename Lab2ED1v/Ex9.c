#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas
typedef struct{
    float x;
    float y;
} Ponto;
void mult_ponto_cons(Ponto *p, float constante){


    printf("Ponto digitado*constante:(%f,%f),\t",p->x*constante,p->y*constante);
}
int main(){
    float constante;
    Ponto *p;
    p = (Ponto*)malloc(sizeof(Ponto));
    if(!p)
        return -1;
    printf("Entre com a coordenada x do ponto:");
    scanf("%f",&p->x);
    printf("Entre com a coordenada y do ponto:");
    scanf("%f",&p->y);
    mult_ponto_cons(p,constante);
free(p);
return 0;
}
