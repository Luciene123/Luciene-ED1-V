#include <stdio.h>
#include <stdlib.h>
int main(){
    /*(a) Copie o c�digo acima e mostre o endere�o da vari�vel a de duas formas: uma usando
    &a e outra usando o ponteiro p. Os endere�os devem ser os mesmos.*/
    int a = 40; // cria uma vari�vel do tipo inteiro, chamada a, e inicializa
    // com valor 40;
    int *p; // cria uma vari�vel do tipo ponteiro para inteiro, chamada p, e o
    // conte�do inicial � lixo;
    p = &a; // faz p receber o endere�o de a. Dizemos que p aponta para a
    printf("%g %g",&a,p);
    system("pause");
    return 0;
}
