#include <stdio.h>
#include<stdlib.h>
int* AllcoateMemoryForArray(int size);
void ReadArray(int *a, int size);
void PrintArray(int *a, int size);
void FreeArray(int *a);
int main()
{
	int *ptr=NULL, no;

	printf("\n Enter How Many elements you want :: ");
	scanf("%d", &no);

	ptr= AllcoateMemoryForArray(no);
	if(ptr==NULL)
		printf("\n unable to allocate memory ");
    
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);

		printf("\n enter elements of array  :: ");
		ReadArray(ptr, no);

		printf("\n elements of array  :: \n");
		PrintArray(ptr, no);

		FreeArray(ptr);
	}
	return 0;
}

int* AllcoateMemoryForArray(int size)
{
	int *a=NULL;
	a= (int*) malloc(sizeof(int)*size);
	//a= (int*) calloc(size,sizeof(int));
	return a;
}

void FreeArray(int *a)
{
	free(a);
	a=NULL;
	printf("\n memory is freed ");
	return;
}

void ReadArray(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("a[%d]", i);
		//scanf("%d", &a[i]);
		//scanf("%d", &i[a]);
		//scanf("%d", (a+i));
		scanf("%d", (i+a));
	}
	return;
}

void PrintArray(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		//printf("%d [%u]\n", a[i], &a[i]);
		//printf("%d [%u]\n", i[a], &i[a]);
		//printf("%d [%u]\n", *(a+i), (a+i));
		printf("%d [%u]\n", *(i+a), (i+a));
	}
	return;
}
