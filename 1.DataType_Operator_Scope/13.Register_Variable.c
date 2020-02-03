#include<stdio.h>
//register int no1=10;
int no4=100;
int main(void)
{
	{
	register int no1=10;
	printf("\n Enter no1 :: ");

	//scanf("%d", &no1);
	//printf("\n no1=%d no1=%u", no1, &no1);
 	printf("no1=%d", no1);
	}
	{
		int no2=100;
		//static int no3=no2; // errro
		static int no3=1;
	}
	return 0;
}
