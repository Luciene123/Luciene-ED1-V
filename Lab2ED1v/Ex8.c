#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas
typedef struct{
    int x;
    int y;
} Ponto;

int main(){
    int n,i,j;
    Ponto *p;
    printf("Calculo da área de um triangulo a partir de dois pontos");
    p = (Ponto*)malloc(n*sizeof(Ponto));
    if(!p)
        return -1;
    for(i=0;i<2;i++)
    {   for(j=0;j<2;j++)
        {   printf("Entre com a coordenada x do ponto %d:",i+1);
            scanf("%d",&p[i].x);
            printf("Entre com a coordenada x do ponto %d:",i+1);
            scanf("%d",&p[j].y);
        }
    }
    for(i=0;i<n;i++)
    {     for(j=0;j<n;j++)
          {
               printf("Pontos digitados:(%d,%d),\t",p[i].x,p[j].y);
          }
    }
free(p);
return 0;
}
