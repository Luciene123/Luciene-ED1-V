#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int i, j, l=0,c=0, M[l][c];
    //Imprime elementos acima da diagonal principal ,menos a diagonal principal;
	for(i=0; i < l; i++)
    {
		for (j=0; j < c; j++)
		{

			if((j>i)&&(!(i==j)))
            {
                printf("\nM[%d][%d]\n", i, j);
			}
		}
	}
    //Imprime elementos abaixo da diagonal secundaria ,menos a diagonal secundaria;
    for(i=0; i < l; i++)
    {
        for (j=0; j < c; j++)
        {
            if ((j<i)&&(!(j==c-i-1)))
            {
				printf("\nM[%d][%d]\n", i, j);
			}
        }
    }
    // Imprime os elementos acima da diagonal principal;
    for(i=0; i < l; i++)
    {
        for (j=0; j < c; j++)
        {
			if (j>i)
            {
				printf("\nM[%d][%d]\n", i, j);
			}
        }
    }
    // Imprime os abaixo da diagonal principal;
     for(i=0; i < l; i++)
    {
        for (j=0; j < c; j++)
        {
			if (j<i)
            {
				printf("\nM[%d][%d]\n", i, j);
			}
        }
    }

	printf("\n\n  Matriz \n\n");
	for(i=0; i < l; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < c; j++){
			printf("%i ", M[i][j]);
		}
		printf("]\n");
	}

    system("pause");

	return 0;
}
