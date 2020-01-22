#include<stdio.h>
int main(void)
{
	int no, counter;

	printf("\n Enter No ::");
	scanf("%d", &no);

	// display numbers from 1 to your entered Number
	
  counter=0;
	while(counter<no)
	{
		//getchar();
		++counter;
		printf("%5d", counter);
	}

  // to display no to 1
  // Try Each Kind Of Decrement to Know More, Uncomment Code
	counter=no;
  //while(counter>=1)
	while(counter>0)
	{
		printf("%5d", counter);
		--counter;                  //1. Pre Decrement
    //counter--;                //2. Post Decrement
    //counter= counter-1        //3. Implement Decrement 
	}


  // Uncomment Below Program to Try
	// infinite loop   
	/*
  counter=0;
	while(counter<no);
	{

		++counter;
		printf("%5d", counter);
	}
	printf("\n end");
  */


	// display numbers from 1 to your entered number
	counter=0;
	while(0)
	{
		//getchar();
		++counter;
		printf("%5d", counter);
		if(counter>=no)
			break;
	}
  
	return 0;
}
