#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter operator like +, -, etc :: ");
	getchar();
	scanf("%c", &op); 
  
  //scanf("%*c%c", &op);

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	ans=0;

	if(op=='+')
		ans= no1+no2;
	else if(op=='-')
		ans= no1-no2;
	else if(op=='*')
		ans= no1*no2;
	else if(op=='/')
	{
		if(no2==0)
		{
			printf("\n can not divide by zero");
			return 0; 
		}
		else
			ans= no1/no2;
	}
	else
	{
		printf("\n invalid op");
		exit(0);//return 0;
	}

	printf("\n %d %c %d = %d", no1, op, no2, ans);

	return 0;
}
