#include <stdlib.h>
#include <stdio.h>
int main(void)
{
   	int i,j,n,m=1,acumula=1;
	printf("Digite o número de linhas:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",acumula);
			acumula++;
		}
  		m++;
		printf("\n");
	}

  	system("PAUSE");
  	return 0;
}
