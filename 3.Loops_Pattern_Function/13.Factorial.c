#include<stdio.h>
int factorial(int n);                         // 1 fun decl
int main(void)
{
	int no=6, ans=0;
	ans= factorial(no);                         // 3. function call

	printf("\n %d!= %d", no, ans);
	return 0;
}
                                              // 2. function defination
int factorial(int n)
{
	int fact,counter;
	for( counter=fact=1; counter<=n; counter++)
	{
		fact*=counter;//fact=fact*counter;
	}
	return fact;
}
