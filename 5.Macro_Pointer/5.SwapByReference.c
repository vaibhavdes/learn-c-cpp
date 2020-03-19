#include<stdio.h>
// Function Declaration
void swap(int *n1, int *n2);
int main(void)
{
	int no1=10, no2=20;
  
	printf("\n before swap in main no1=%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	swap(&no1, &no2); // function call
  
	// no1, no2 actual arguments
	printf("\n after swap in main no1 =%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	return 0;
}

// Function Definition
// n1 and n2 formal arguments
void swap(int *n1, int *n2)
{
	int temp=0;
  
	printf("\n before swap in swap fun  *n1 =%d [n1=%u] *n2=%d [n2=%u]", *n1, n1,*n2, n2 );
  
	temp=*n1; 	*n1=*n2; 	*n2=temp;
  
	printf("\n after swap in swap fun  *n1 =%d [n1=%u] *n2=%d [n2=%u]", *n1, n1,*n2, n2 );
  
	return;
}
