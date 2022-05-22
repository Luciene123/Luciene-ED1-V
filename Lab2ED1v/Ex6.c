#include <stdio.h>
#include <stdlib.h>
int main(){

int *n, i, nEnt;
printf("Informe a quantidade de numero:");
scanf("%d",&nEnt);
// é necessário usar o comando malloc para alocar a memória
n = (int*) malloc(nEnt*sizeof(int));
for (i = 0; i <=sizeof(n); i++)
{
 printf("Informe o numero %d :",i+1);
 scanf("%d",&n[i]);
}

for (i = 0; i <= sizeof(n); i++){
 printf("Numero %d : %d\n",i+1, n[i]);
}

// ao terminar de usar o vetor, devemos liberar a memória
free(n);
}

