#include <stdio.h>
#include <stdio.h>
#include<math.h>
void maiorMenor(float *vet, int n, float *menor, float *maior){
    int i;
    *menor = *vet;//Posição vet[0] de vet
    *menor = *vet;//Posição vet[0] de vet
    *maior = *vet;
    for(i = 1; i < n; i++){
        if(*menor > *(vet + i))
            *menor = *(vet + i);
        else if(*maior < *(vet + i))
            *maior = *(vet + i);
    printf("Maior valor do vetor%d",*maior);
    printf("Menor valor do vetor%d",*menor);
    }
}
void  imprime_vet_float(float vetor[],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("O numero float %d R$: ",i+1,vetor[i]);
  }
}

int main(){
    float *menor, *maior, vet[4] = {1,2,3,4};
    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_float(vet,4);
    maiorMenor(vet,4,menor,maior);
    return 0;
}
