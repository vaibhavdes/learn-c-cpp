#include <stdio.h>
#include <stdlib.h>

void display_array_elements(int *ptr);
void select_sort(void *base, size_t nmemb, size_t size,
                 int (*compar)(const void *, const void *));
int compare(const void *v1,const void *v2);

int main(void) {
	int arr[5]={22,5,33,12,8};
  
	printf("\n Before sort \n");
	display_array_elements(arr);
  
	select_sort(arr,5,sizeof(int),compare);
  
	printf("\n After sort \n");
	display_array_elements(arr);
  
	return EXIT_SUCCESS;
}

void select_sort(void *base, size_t nmemb, size_t size,
                 int (*compar)(const void *, const void *))

{
	if(size==4)
	{
		int *ptr=(int *)base;
		int i,j;
		for(i=0;i<nmemb-1;i++)
		{
			for(j=i+1;j<nmemb;j++)
			{
				if((*compar)(&ptr[i],&ptr[j]))
				{
					ptr[i]=ptr[i]+ ptr[j];
					ptr[j]=ptr[i]- ptr[j];
					ptr[i]=ptr[i]- ptr[j];
				}
			}
		}
	}
}

int compare(const void *v1,const void *v2)
{
	int n1 = *(int *)v1;
	int n2 = *(int *)v2;
	return n1 > n2;
}

void display_array_elements(int *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t%d",ptr[i]);
	}
}
