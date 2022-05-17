/*(8)Calcula a média e o desvio padrão dos  números informados pelo usuário, neste caso são 5 numeros.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 05
float rm, rv;
float media( float som[], int n )
{
    float soma = 0.0, media;
    int i = 0;

    for( i = 0; i < n; i++ )
        soma += som[i];
    rm=soma/n;
    return rm;
}

float variancia( float som[], int n )
{
    float soma = 0.0;
    float desvio = 0.0;
    float variancia;
    float mediav = media( som, n );
    int i = 0;

    for( i = 0; i < n; i++ )
    {
        desvio = som[i] - mediav;
        soma += (desvio * desvio);
    }
    rv=soma / n;
    return rv;
}

float desvio_padrao( float som[], int n  )
{
    float soma = 0.0;
    return sqrt(rv);
}

int main()
{

    float vetor[ MAX ];
    int  i;

    for( i = 0; i < MAX; i++ )
    {
        printf("Digite um numero: ");
        scanf( "%f", &vetor[i] );
    }

    printf("Media = %g\n", media( vetor, MAX ) );
    printf("Variancia = %g\n", variancia( vetor, MAX ) );
    printf("Desvio Padrao = %g\n", desvio_padrao( vetor, MAX ));
    system("pause");
    return 0;
}
