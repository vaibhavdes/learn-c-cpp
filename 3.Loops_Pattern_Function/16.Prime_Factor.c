#include<stdio.h>
void PrimeFactorsFunction(int n);
int counter=2;
int main(void)
{
	int no;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	printf("\n Prime factors :: \n");
  
	PrimeFactorsFunction(no);

	return 0;
}

void PrimeFactorsFunction(int n)
{
	int counter=2;

	while(n!=1)
	{
		if(n%counter==0)
		{
			printf("%d*", counter);
			n/=counter;         // Shorthand Operator :n=n/counter;
		}
		else
			counter++;
	}
	return;
}
