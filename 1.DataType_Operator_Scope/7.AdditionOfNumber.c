#include<stdio.h>
int main(void)
{
	int no1, no2, ans;
	printf("\n  Enter no1 =");
	scanf("%d",&no1);

	printf("\n  Enter no2 =");
	scanf("%d",&no2);

	ans=0;
	ans=no1+no2;

	printf("\n %d +%d =%d\n", no1,no2, ans);
	return 0;
}

