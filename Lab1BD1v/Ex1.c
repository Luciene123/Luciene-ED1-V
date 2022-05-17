#include <stdio.h>
#include <stdlib.h>
/*) Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um
ganharia.*/
int main()
{
    float ap1,ap2,ap3,total, premio;
    printf("Apostador 1 digite o valor da sua aposta:");
    scanf("%f",&ap1);
    printf("Apostador 2 digite o valor da sua aposta:");
    scanf("%f",&ap2);
    printf("Apostador 3 digite o valor da sua aposta:");
    scanf("%f",&ap3);
    printf("Digite Valor Bolao do apostador 1: %.2f\n",ap1);
    printf("Digite Valor Bolao do apostador 2: %.2f\n",ap2);
    printf("Digite Valor Bolao do apostador 3: %.2f\n",ap3);
    printf("Valor Bolao 1:%.2f\n",ap1);
    printf("Valor Bolao 2:%.2f\n",ap2);
    printf("Valor Bolao 3:%.2f\n",ap3);
    //Total da aposta
    total=ap1 + ap2+ ap3;
    //Percentual aposta de apostador
    ap1=(ap1/total);
    ap2=(ap2/total);
    ap3=(ap3/total);
    printf("Porcentagem sobre premio Bolao 1:%.2f\n",ap1);
    printf("Porcentagem sobre premio Bolao 2:%.2f\n",ap2);
    printf("Porcentagem sobre premio Bolao 3:%.2f\n",ap3);
    //Valor a receber por cada apostador
    printf("Digite o valor total do premio:");
    scanf("%f",&premio);
    printf("valor total do premio:%.2f\n",premio);
    ap1=premio*ap1;
    ap2=premio*ap2;
    ap3=premio*ap3;
    printf("Premio apostador 1: %.2f\n",ap1);
    printf("Premio apostador 2: %.2f\n",ap2);
    printf("Premio apostador 3: %.2f\n",ap3);
    system("pause");
    return 0;
}
