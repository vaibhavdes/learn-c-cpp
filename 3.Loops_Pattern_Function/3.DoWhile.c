#include<stdio.h>
int main(void)
{
	int no1, no2, ans , choice;

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
			case 1: // addition
					ans= no1+no2; break;
			case 2: // minus
					ans= no1-no2; break;
			case 3: // div
					if(no2==0)
					{
						printf("\n Can not divide by zero");
						continue;	//break;
					}
					else
						ans= no1/no2; break;
			case 4: // product
					ans= no1*no2; break;
			case 0:
					exit(0);
		}
		printf("\n ans=%d", ans);

		printf("\n Enter 1 to Continue or ) to exit :: ");
		scanf("%d", &choice);


	}
  while(choice!=0);
  
	return 0;
}

