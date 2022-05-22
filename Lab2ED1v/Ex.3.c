#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("<< Listando um vetor como ponteiro de inteiros>>\n");
    double Vet[10];
	int i;
    for(i=0;i<10;i++)
    {
		printf("Entre com o numero %d:\n",i++);
        	scanf("%d",&Vet[i]);
    }
    for(i=0;i<10;i++)
    {
		printf("Os numeros lidos são %d:\n",Vet[i]);
    }
	system("pause");
    return 0;
}

