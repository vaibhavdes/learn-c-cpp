#include<stdio.h>
void PrimeFactorsRecursion(int n);
int counter=2;
int main(void)
{
	int no;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	printf("\n Prime factors :: \n");
  
	PrimeFactorsRecursion(no);

	return 0;
}

void PrimeFactorsRecursion(int n)
{
  //static int counter=2;
	//printf("\n n=%d [%u] counter=%d [%u]", n, &n,counter, &counter);
	//getchar();
  
	if(n==1)
	{
		return ;
	}
	else if(n%counter==0)
	{
			printf("%d*", counter);
			n/=counter; // n=n/counter;
	}
	else
	{
			counter++;
	}
  
	//printf("\n n=%d [%u] counter=%d [%u]", n, &n,counter, &counter);
	//getchar();
  
	PrimeFactorsRecursion(n);
	return;
}
