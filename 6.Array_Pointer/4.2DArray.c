#include <stdio.h>
#define ROW 3
#define COL 3

int main( void )
{
	int mat[ROW][COL],r,c, sum, grandtotal=0, colsum[COL]={0};

	printf("\n Enter Elements of matrix ::\n");
  
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			printf("\n mat[%d][%d]", r,c);
			scanf("%d", &mat[r][c]);
		}
	}

	printf("\n Elements of Matrix are :: \n");
  
	for(r=0; r<ROW; r++)
	{
		for(sum=c=0; c<COL; c++)
		{
			sum+=mat[r][c];                                             // row wise sum
			colsum[r]+= mat[c][r];                                      // col wise
			printf("%d [%u]\t", mat[r][c], &mat[r][c]);
		}
		printf("%d\n", sum);
		grandtotal+=sum;
	}
  
	for(c=0; c<COL; c++)
	{
		printf("%-15d", colsum[c]);
	}
	printf("%-15d", grandtotal);


	return 0;
}
