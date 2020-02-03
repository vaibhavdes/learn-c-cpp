#include<stdio.h>
int Factorial(int n); // 1 fun decl
int IsStrongNo(int n);
void StrongNoInRange(int lowerlimit, int upperlimit);
int main(void)
{
	// check no is strong or not
	
	int no=235, ans=0;

  // Way - 1
	ans = IsStrongNo(no);
	if( ans==no )
  		printf("%d is strong no", no);

  // Way - 2
	if( no==IsStrongNo(no))
		printf("%d is strong no", no);
	else
		printf("%d is not a strong no", no);
    
    
	// print all strong no between 1 to 500
  
	int lowerLimit,  upperLimit,no;
	printf("\n Enter Lower Limit :: ");
	scanf("%d",&lowerLimit);

	printf("\n Enter Upper Limit :: ");
	scanf("%d",&upperLimit);

	printf("\n strong no between %d  to %d \n ", lowerLimit, upperLimit);
	StrongNoInRange(lowerLimit, upperLimit);


	return 0;
}

void StrongNoInRange(int lowerlimit, int upperlimit)
{
	int n;
	for(n=lowerlimit;n<=upperlimit; n++ )
	{
		if(n==IsStrongNo(n))
			printf("%5d", n);
	}
	return;
}

int IsStrongNo(int n)
{
	int rem, sum;

	for(sum=rem=0; n!=0 ; n/=10)
	{
		rem= n%10;
		sum+=Factorial(rem);
	}
	return sum;
}
