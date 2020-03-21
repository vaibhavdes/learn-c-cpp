#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
int main()
{
	char *arr[SIZE], name[20], *temp=NULL;
	int i, j;

	for(i=0; i<SIZE; i++)
	{
		printf("\n Enter Names [%d]", i);
		scanf("%s", name);
		arr[i] =  (char*)malloc((strlen(name)+1)*sizeof(char));
		strcpy(arr[i], name);
	}
  
	printf("\n names before sort :: \n");
	for(i=0; i<SIZE; i++)
	{
		printf("\n &arr[%d]%u arr[%d]=%u *arr[%d]=%c  arr[%d]=%s",i, &arr[i], i, arr[i], i , *arr[i], i, arr[i]);
	}

	for(i=0; i<SIZE; i++)
	{
		for(j=i+1; j<SIZE; j++)
		{
      // Uncomment Below Line and Comment Other to Change Order i.e Ascending or Descending
      
			//if(strcmp(arr[i], arr[j])>0)                        // Ascending Ordering
			if(strcmp(arr[i], arr[j])<0)                          // Descending Ordering
			{
				temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("\n names after sort:: \n");
	for(i=0; i<SIZE; i++)
	{
		printf("\n &arr[%d]%u arr[%d]=%u *arr[%d]=%c  arr[%d]=%s",i, &arr[i], i, arr[i], i , *arr[i], i, arr[i]);
	}

  
	for( i=0; i<SIZE; i++)
	{
		free(arr[i]);
		arr[i]=NULL;
	}
  
	printf("\n Memory is freed");

	return 0;
}
