#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fat = 1, i=1,n;
	printf("Digite o numero do fatorial:");
	scanf("%d",&n);
	while (i <= n)
	{
    		fat = fat * i;
		printf ("O fatorial de %d!= e %d\n",i, fat );
		i++;
	}

	system("PAUSE");
	return 0;
}
