#include <stdio.h>
#include <stdlib.h>
int main(){
    /*(a) Copie o código acima e mostre o endereço da variável a de duas formas: uma usando
    &a e outra usando o ponteiro p. Os endereços devem ser os mesmos.*/
    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa
    // com valor 40;
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o
    // conteúdo inicial é lixo;
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a
    printf("%g %g",&a,p);
    system("pause");
    return 0;
}
