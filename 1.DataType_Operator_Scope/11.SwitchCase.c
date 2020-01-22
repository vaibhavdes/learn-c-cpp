#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter op :: ");
	getchar();
	scanf("%c", &op); //scanf("%*c%c", &op);

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	ans=0;

	switch(op)
	{
		default: printf("\n Invalid operator ::: ");
				 exit(0); // return 0;
		case '+' : ans= no1+no2; break;
		case '-' : ans= no1-no2; break;
		case '*' : ans= no1*no2; break; // continue error
		case '/' :
					if(no2==0)
					{
						printf("\n can not divide by zero");
						exit(0); // return 0;
					}
					else
						ans= no1/no2; break;
	}

	printf("\n %d %c %d = %d", no1, op, no2, ans);





	return 0;
}
