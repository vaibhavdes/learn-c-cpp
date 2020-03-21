#include <stdio.h>
#define ROW 2
#define COL 2
//void ReadMatrix(int m[][], int row, int col); // not allowed
//void ReadMatrix(int m[ROW][COL], int row, int col); // allowed
void ReadMatrix(int m[][COL], int row, int col); // allowred
void PrintMatrix(int m[][COL], int row, int col);
void MatrixAddition(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col);
void MatrixMultiply(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col);
int main( void )
{
	int mat1[ROW][COL],mat2[ROW][COL], res[ROW][COL]={0};

	printf("\n Enter Elements of matrix 1::\n");
	ReadMatrix(mat1, ROW, COL);

	printf("\n Elements of Matrix 1 are :: \n");
	PrintMatrix(mat1,ROW, COL);


	printf("\n Enter Elements of matrix 2 ::\n");
	ReadMatrix(mat2, ROW, COL);


	printf("\n Elements of Matrix 2 are :: \n");
	PrintMatrix(mat2,ROW, COL);

  
  // Uncomment Below Block to Perform Matrix Addition
  /*
    MatrixAddition(mat1, mat2, res, ROW, COL);
    printf("\n Elements of Sum Matrix :: \n");
    PrintMatrix(res,ROW, COL);
  */

  // Uncomment Below Block to Perform Matrix Multiplication
  /*
    MatrixMultiply(mat1, mat2, res, ROW, COL);
    printf("\n Elements of Matrix multiply :: \n");
    PrintMatrix(res,ROW, COL);
  */

	return 0;
}

void MatrixMultiply(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col)
{
	int i, j, k;

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			for(k=0; k<row; k++)
			{
				printf("\n m1[%d][%d]%d * m2[%d][%d]%d ", i ,k, m1[i][k], k, j, m2[k][j]);
				//ans[i][j]+= m1[i][k]* m2[k][j];
				*(*(ans+i)+j) += *(*(m1+i)+k) *   *(*(m2+k)+j);
			}
		}
	}
	return;
}

void MatrixAddition(int m1[][COL], int m2[][COL], int ans[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			ans[r][c]= m1[r][c] + m2[r][c];
		}
	}
	return ;
}

void ReadMatrix(int m[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n m[%d][%d]", r,c);
			//scanf("%d", &m[r][c]);
			scanf("%d", (*(m+r)+c));
		}
	}
	return;
}

void PrintMatrix(int m[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//printf("%d [%u]\t", m[r][c], &m[r][c]);
			printf("%d [%u]\t",*(*(m+r)+c),  (*(m+r)+c));
		}
		printf("\n");
	}
	return;
}

