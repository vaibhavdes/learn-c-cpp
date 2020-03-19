#include<stdio.h>
# This Variable/State has global scope and existence
int no1=10, no2=20;
void swap(void);
int main(void)
{
	printf("\n before swap in main no1=%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	swap(); // function call
  
	printf("\n after swap in main no1 =%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	return 0;
}

// If no argument is needed for function either keep it blank or use void in ()
void swap(void)
{
	int temp=0;
	
  printf("\n before swap in swap no1=%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	temp=no1; 	no1=no2; 	no2=temp;
  
	printf("\n after swap in swap no1=%d [&no2=%u] no2=%d [&no2=%u]", no1, &no1,no2, &no2 );
  
	return;
}
