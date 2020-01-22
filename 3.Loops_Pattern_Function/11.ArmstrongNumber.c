#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, rem, sum, ono, lowerlimit, upperlimit;

  printf("\n Enter No:: ");
	scanf("%d", &no);

	for(ono=no, rem=sum=0; no!=0; no/=10 )
	{
		rem= no%10;
		sum+=rem*rem*rem;
	}
	if( sum==ono)
		printf("%d is armstrong", ono);
	else
		printf("%d is not armstrong", ono);


// Uncomment Below Program To Run

/*	

	printf("\n Enter lower limit:: ");
	scanf("%d", &lowerlimit);
	printf("\n Enter upper limit:: ");
	scanf("%d", &upperlimit);

	printf("\n armstrong  betweem %d to %d", lowerlimit, upperlimit);

	for( no=lowerlimit; no<=upperlimit;no++ )
	{
		for(ono=no, rem=sum=0; ono!=0; ono/=10 )
		{
			rem= ono%10;
			sum+=rem*rem*rem;
		}
		if( sum==no)
			printf(" %d ", no);
		//getchar();
	}
    
*/

	return 0;
}

