#include<stdio.h>
#include<stdlib.h>
int main()
{
/* fat = 10, i=10,n=15;
	scanf("%d",&n);
	while (i <= n)
	{
    		fat = fat * i;
		printf ("O fatorial de %d!= e %d\n",i, fat );
		i++;
	}*/
	/*(22)fatorial de 10! a 15!. O fatorial de 10! foi calculado primeiro,
    em seguida foi usado o seu resultado para calcular o fatorial de  15!
    //O Code::Blocks abriu o console mas não executou nada na
    */

    int fat1=1;
	int i1 = 1,i2=10, fat2;
    //calculando
	while (i1 <= 9)
	{
    		fat1= fat1 * i1;
    		i1++;

	}
    fat2=fat1;
	while ((i2 >= 10) && (i2 <= 15))
	{
    		fat2 = fat2 * i2;
    		printf ("O fatorial de %d e %d\n",i2, fat2 );
    		i2++;
	}


/*Resposta: O fatorial de 10! foi calculado primeiro,
 em seguida usa o seu resultado para calcular o fatorial de  15!
*/

	system("PAUSE");
	return 0;
}

