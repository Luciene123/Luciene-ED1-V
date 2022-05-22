#include <stdio.h>
#include <stdlib.h>
int main(){

int *n, i, contPares=0,contImpares=0;
// é necessário usar o comando malloc para alocar a memória
n = (int*) malloc(5*sizeof(int));
for (i = 0; i < n; i++)
{
 printf("Informe o numero %d R$:",i+1);
 scanf("%d",&n[i]);
 if(n[i]%2=0)
    contPares++;
 else
    contImpares++;
}
printf("\nSao pares:%d\n",contPares);
printf("\nSao impares:%d\n",contImpares);
// ao terminar de usar o vetor, devemos liberar a memória
free(n);
}
