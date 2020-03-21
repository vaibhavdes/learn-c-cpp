#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char **arr=NULL, name[20], *temp=NULL, no;
	int i, j;

	printf("\n Enter How many Students you want :: ");
	scanf("%d", &no);

	arr = (char**) malloc(sizeof(char*)* no);

	for(i=0; i<no; i++)
	{
		printf("\n Enter Names [%d]", i);
		scanf("%s", name);
		arr[i] =  (char*)malloc((strlen(name)+1)*sizeof(char));
		strcpy(arr[i], name);
	}
  
	printf("\n names before sort :: \n");
	for(i=0; i<no; i++)
	{
		printf("\n &arr[%d]%u arr[%d]=%u *arr[%d]=%c  arr[%d]=%s",i, &arr[i], i, arr[i], i , *arr[i], i, arr[i]);
	}

	for(i=0; i<no; i++)
	{
		for(j=i+1; j<no; j++)
		{
			//if(strcmp(arr[i], arr[j])>0) // asc
			if(strcmp(arr[i], arr[j])<0) // desc
			{
				temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("\n names after sort:: \n");
	for(i=0; i<no; i++)
	{
		printf("\n &arr[%d]%u arr[%d]=%u *arr[%d]=%c  arr[%d]=%s",i, &arr[i], i, arr[i], i , *arr[i], i, arr[i]);
	}

	for( i=0; i<no; i++)
	{
		free(arr[i]);
		arr[i]=NULL;
	}
  
	free(arr);
	arr=NULL;
	printf("\n Memory is freed");

	return 0;
}
