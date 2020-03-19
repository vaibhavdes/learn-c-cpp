#include <stdio.h>
#define SIZE 5
int main( void )
{
	//int arr[  ]={1,2,3,4,5};
	int arr[ SIZE ]; //int arr[ 5 ];

	int i;

	printf("\n Enter elements of array :: \n ");
	for(i=0; i<SIZE; i++)
	{
		printf("\n  arr[%d]", i);
	  scanf("%d", &arr[i]); // array notation
    
    // Uncommment each one below and try different ways of scanning input with reference
	  //	scanf("%d", &i[arr]);
	  //	scanf("%d", (arr+i)); // pointer notation
	  //  scanf("%d", (i+arr));

	}

	printf("\n Elements of array :: \n");
	for( i=0; i<SIZE; i++)
	{
      // Check Last File to Know different ways of Accessing Array Members
		  printf("\n %d [%u]", *(i+arr), (i+arr));

	}
  
  // Size of Array in Bytes ( int (4) and in Total 5 Elements = 4 * 5 = 20 )
	printf("\n size of arr in bytes =%d", sizeof(arr));
  
	printf("\n no of elements in array =%d", SIZE);

  // Search for Below Format Specifier
	printf("\n &arr[0]=%u arr=%u &arr=%u", &arr[0], arr, &arr);
	printf("\n &arr[0]+1=%u arr+1=%u &arr+1=%u", &arr[0]+1, arr+1, &arr+1);

	printf("\n\n\n\n");
  
	return 0;
}

