#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int row, col, **ptr=NULL, r,c;

	printf("\n Enter How many rows you want :: ");
	scanf("%d", &row);
  
	printf("\n Enter How many cols you want :: ");
	scanf("%d", &col);

	// allocate memory for 2d array of int
	ptr= (int**)malloc(sizeof(int*)*row);
	for(r=0 ;r<row; r++)
	{
		ptr[r]= (int*)malloc(sizeof(int)*col);
	}
  
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{
		// scanf data for 2d array
		for(r=0; r<row; r++)
		{
			for(c=0;c<col; c++ )
			{
				printf("ptr[%d][%d] :: ", r,c);
				//scanf("%d",&ptr[r][c]);
				scanf("%d",(*(ptr+r)+c));
			}
		}

		// print data of 2D array
		printf("\n ptr=%u &ptr=%u\n", ptr, &ptr);
		for(r=0; r<row; r++)
		{
			printf("\n &ptr[%d]%u ptr[%d]%u\n ", r, &ptr[r], r, ptr[r]);
			for(c=0; c<col; c++)
			{
				//printf("\t %d [%u]", ptr[r][c] , &ptr[r][c]);
				printf("\t %d [%u]", *(*(ptr+r)+c) , (*(ptr+r)+c));
			}
			printf("\n");
		}

		// free memory for 2d array of int
		for(r=0; r<row; r++)
		{
			free(ptr[r]);
		}
    
		free(ptr);
		ptr=NULL;
		printf("\n Memory is freed");

	}

	return 0;
}
