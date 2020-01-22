#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int row, col;

	for( row=1; row<=10; row++)
	{
		for(col=1; col<=10; col++)
		{
			//printf("\n row=%d col=%d", row, col);
		   //	printf("%5d", row* col);
			printf("%5d", row+(col-1)*10);
		}
		getchar();
		printf("\n"); // go to next line
	}


	return 0;
}

