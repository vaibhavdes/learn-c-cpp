#include <stdio.h>
#include <stdlib.h>

// Function Declaration
void display_array_elements(int *ptr);
int compare(const void *v1,const void *v2);

int main(void) {

	int arr[5]={23,45,56,22,3};
  
	printf("\n Before sort \n");
	display_array_elements(arr);

  // Function Call
  //qsort - first argument is base address of collection
  //qsort - second argument is how many elements exist in collection
  //qsort - third argument specifies what is size(scale factor) of every element
  //qsort - forth argument is which comparison code to be called

	qsort(arr,5,sizeof(int),compare);
	printf("\n After sort \n");
  
	display_array_elements(arr);
	return EXIT_SUCCESS;
}

// Function Definition

void display_array_elements(int *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t%d",ptr[i]);
	}
}

int compare(const void *v1,const void *v2)        //this function receives the address of two elements which are picked for comparision
{
	int n1= *(int *)v1;	                            //v1 and v2 here is void pointer so need to typecast
	int n2= *(int *)v2;
	return n1 > n2;
}
