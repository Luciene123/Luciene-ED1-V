#include <stdio.h>
#include <stdlib.h>
int main(){
//(b) Altere o valor da vari�vel a usando o scanf sem usar o operador &
int a = 40; // cria uma vari�vel do tipo inteiro, chamada a, e inicializa
 // com valor 40;
int *p; // cria uma vari�vel do tipo ponteiro para inteiro, chamada p, e o
 // conte�do inicial � lixo;
p = &a; // faz p receber o endere�o de a. Dizemos que p aponta para a
printf("Digite um inteiro");
scanf("%d",p);
printf("%d %d",a,*p);
system("pause");
return 0;
}
