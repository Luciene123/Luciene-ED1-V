#include <stdio.h>
#include <stdlib.h>

int *aloca_inteiro(int *vet,int n)
{
    vet=(int*)malloc(n*sizeof(int*));
    return vet;
}
imprime_vet(int *vet,int n)
{
    int i;
    for(i = 0; i < n; i++){
        printf("O números inteiros %d R$:%d ",i+1,vet[i]);
    }
}
int main(){
    int n,i,*vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    vet=aloca_inteiro(vet,n);
    for(i = 0; i < n; i++){
        printf("Digite os numero inteiro %d:",i+1);
        scanf("%d",&vet[i]);
    }
    printf("O vetor eh: ");
    imprime_vet(vet,n);
    free(vet);
    return 0;
}
