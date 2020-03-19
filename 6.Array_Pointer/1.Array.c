#include <stdio.h>
#define SIZE 5
int main( void )
{
	int arr[]={1,2,3,4,5};
  
	int i;

	printf("\n Elements of array :: \n");
  
	for( i=0; i<SIZE; i++)
	{
		  printf("\n %d [%u]", arr[i], &arr[i]);  // array notation
      
      // Uncomment Each one below and Try different way of accessing reference
      // printf("\n %d [%u]", i[arr], &i[arr]);
		  // printf("\n %d [%u]", *(arr+i), (arr+i));
		  // printf("\n %d [%u]", *(i+arr), (i+arr));
	}
  
	return 0;
}
