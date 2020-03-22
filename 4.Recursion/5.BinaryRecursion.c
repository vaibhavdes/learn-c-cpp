#include<stdio.h>
int main(void)
{
	int no=64;
	printf("\n ans=%d", binary(no));
	return 0;
}
int binary(int n)
{
	int result=0;
	if(n==1)
	{
		result= 1;
		printf("\n n=%d result=%d", n, result);
		return 1;
	}
	else
	{
		result= 10 *binary(n/2)+ n%2;
		printf("\n n=%d result=%d", n, result);
		return result;
	}
}
