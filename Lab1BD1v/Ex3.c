#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float massa, altura, IMC;
    printf("Digite massa(KG):");
    scanf("%f",&massa);
    printf("Digite altura(m):");
    scanf("%f",&altura);
    IMC=massa/(pow(altura,2));
    printf(" O IMC e: %.2f\n",IMC);

    if(IMC<18.5)
    {
        printf("Magreza.\n");
    }

    else if(IMC>18.5 && IMC<24.9)
    {
        printf("Saudável.\n");
    }
    else if(IMC>25 && IMC<29.9)
    {
        printf("Sobrepeso.\n");
    }
    else if(IMC>30 && IMC<34.9)
    {
            printf("Obesidade grau 1.\n");
    }
    else if(IMC>35 && IMC<39.9)
    {
        printf("Obesidade grau 2(severa).\n");
    }
    else if(IMC>40)
    {
            printf("Obesidade grau 3(morbida).\n");
    }

    system("pause");
    return 0;
}
