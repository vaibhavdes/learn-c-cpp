#include<stdio.h>
#include<stdlib.h>

typedef enum menuchoice
{
	Exit=0, Addition=1,Minus,Division, Product
}MENUCHOICE;

int main(void)
{
	int no1, no2, ans;
	MENUCHOICE choice;

	do
	{
		printf("\n Enter No1 :: ");
		scanf("%d", &no1);

		printf("\n Enter No2 :: ");
		scanf("%d", &no2);

		printf("\n 1. Addition  \n 2. Minus \n 3. division \n 4. product \n 0. Exit");
		printf("\n Enter Your choice :: ");
		scanf("%d", &choice);


		switch(choice)
		{
			case Addition: // addition
					ans= no1+no2; break;
			case Minus: // minus
					ans= no1-no2; break;
			case Division: // div
					if(no2==0)
					{
						printf("\n Can not divide by zero");
						continue;	//break;
					}
					else
						ans= no1/no2; break;
			case Product: // product
					ans= no1*no2; break;
			case Exit:
					exit(0);
		}
		printf("\n ans=%d", ans);

		printf("\n Enter 1 to Continue or 0 to exit :: ");
		scanf("%d", &choice);


	}while(choice!=0);
	return 0;
}

