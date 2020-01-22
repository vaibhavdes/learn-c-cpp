#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, counter, lowerlimit, upperlimit;

	//no is prime or not
	
  printf("\n Enter no ::");
	scanf("%d", &no);
	for( counter=2; counter<no; counter++)
	{
		if(no%counter==0)
			break;
	}
	if(counter==no)
		printf("\n %d is prime", no);
	else
		printf("\n %d is not prime", no);*/


  //Uncomment Below Program to Run
  /*
  
	// prime no 1 to 100
	printf("\n Enter your lower limit :: ");
	scanf("%d", &lowerlimit);

	printf("\n Enter your upper limit :: ");
	scanf("%d", &upperlimit);

	printf("\n prime no between %d to %d :: ", lowerlimit, upperlimit);
  
	for(no=lowerlimit; no<=upperlimit; no++)
	{
		for( counter=2; counter<no; counter++)
		{
			if(no%counter==0)
				break;
		}
		if(counter==no)
			printf(" %d\n", no);
	}

  */


	return 0;
}

