#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	// conditional operator
	// syntax:           condition ? true part : false part;
  
	int no=0;

	no%2==0 ? printf("\n %d is even ", no) : printf("\n %d is odd", no);

	no%2 ? printf("\n %d is odd ", no) : printf("\n %d is even", no);

	// condition ? true part :  condition ? true part : false part;

	printf("\n");

	no>0 ? printf("%d is +ve ", no) : no==0? printf("%d is zero", no): printf("%d is -ve", no);

	{
		int no1=30, no2=30;
		printf("\n");
		no1>no2 ? printf("%d is max (no1) ", no1) : no1==no2 ? printf("%d (no1) is equal to %d(no2)", no1, no2) : printf("\n %d is max(no2)", no2);
	}
  
	return 0;
}



