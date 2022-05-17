#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
     char nome[30];
     int i;

     printf("Digite seu nome: ");
     scanf("%s",&nome);

     for (i=0;i < strlen(nome);i++)
     {
              nome[i] -= 32;
     }

    printf("Nome:%s " ,nome);
    printf("\n\n");
    system("pause");
    return 0;

}
