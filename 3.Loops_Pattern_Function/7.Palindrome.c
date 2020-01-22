#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, ono, rem, rev;

	printf("\n Enter No :: ");
	scanf("%d" ,&no);

	rem=rev=0;
	ono=no;

	while(no!=0)
	{
		rem=no%10;
		no/=10; //no=no/10;
		rev=rev*10+rem;
	}
	printf("\n rev=%d", rev);
	if(ono==rev)
		printf("\n %d is  palindrome",ono );
	else
		printf("\n %d is not palindrome",ono );

	return 0;
}

