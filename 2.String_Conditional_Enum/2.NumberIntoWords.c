#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, unit, tenth, hunderd;

	printf("\n Enter No :: ");
	scanf("%d", &no);
	if( no==0)
		printf("\n zero");
	else if( no>=100 && no<=999)
	{
		hunderd= no/100;
		no=no%100;
		switch(hunderd)
		{
			case 1: printf(" one hundred "); break;
			case 2: printf(" two hundred "); break;
			case 3: printf(" three hundred "); break;
			case 4: printf(" four hundred "); break;
		}


	}

		tenth= no/10;
		unit= no%10;

		switch(tenth)
		{
			case 1:
					switch(unit)
					{
						case 0: printf(" ten "); break;
						case 1: printf(" eleven "); break;
						case 2: printf(" twelve"); break;
						case 3: printf(" thirteen "); break;
					}
					break;
			case 1+1: printf(" twenty "); break;
			case 1*2+1: printf(" thirty "); break;
			case 4: printf(" fourty "); break;
		}
		if(tenth!=1)
		{
			switch(unit)
			{
				//case 0: printf(" zero "); break;
				case 1: printf(" one "); break;
				case 2: printf(" two "); break;
				case 3: printf(" three "); break;
				case 4: printf(" four "); break;
			}
		}


	return 0;
}
