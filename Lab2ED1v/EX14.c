#include <stdio.h>
#include <stdlib.h>
void to_double(int vet[3]){
    for(int i = 0; i < 3; i++)
        printf("O números flutuante %d R$:%.2f",i+1,(double)vet[i]);
}
int main(){
    int n,i,vet[3];
    for(i = 0; i < 3; i++){
        printf("Digite os numero inteiro %d:",i+1);
        scanf("%d",&vet[i]);
    }
    printf("O vetor de eh: ");
    to_double(vet);
    return 0;
}
