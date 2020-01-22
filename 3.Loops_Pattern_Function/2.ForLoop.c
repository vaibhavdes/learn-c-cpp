#include<stdio.h>
int main(void)
{
	int no, counter;

	printf("\n Enter No ::");
	scanf("%d", &no);

	// display from 1 to number
	for(counter=1; counter<=no; counter++)
		{
			printf("%5d", counter);
		} 


	// display from number to 1
	for( counter=no; counter>=1; counter--)
		{
			printf("%5d", counter);
		}


  //Will Below Program work without statements in For Loop 
  //Uncomment Below Program to  Try
  /*
	counter = 1;
		for( ; ; )
		{
			printf("%5d", counter);
			counter++;
			if(counter>no)
				break;
		}
   */


	//Uncomment Below Program to Try 
  /*
	for(counter=1; counter<=no;); //infinite loop as counter++ is not in ince decre
	{
		printf("%5d", counter);
		counter++;
	}
  */

  printf("\n end");

	return 0;
}

