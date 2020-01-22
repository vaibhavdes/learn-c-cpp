#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no;
  
  //Uncomment Each Program One By One to Try
  
  
	/* Program - 1
	for(no=65; no<=122; no++)
	{
		if(no>=91 && no<=96)
			break;                          // break go out of loop
		printf("\n%3d - %3c", no, no);
	}
  */
  
  
	/* Program - 2
  for(no=65; no<=122; no++)
	{
		if(no>=91 && no<=96)
			continue;                       // it will go to next iteration
		printf("\n%3d - %3c", no, no);
	}
  */

	/* Program - 3
  for(no=65; no<=122; no++)
	{
		if(!(no>=91 && no<=96))
			printf("\n%3d - %3c", no, no);
	}
  */


  /* Program - 4
	for(no=65; no<=122; no++)
	{
		if(no>=91 && no<=96)
		;                                 
		else
			printf("\n%3d - %3c", no, no);
	}
  */
  
  /* Program - 5
  for(no=65; no<=122; no++)
	{
		if(no>=91 && no<=96)
		{ 
      //statements here 
    }
		else
			printf("\n%3d - %3c", no, no);
	}
  */
  
  
	return 0;
}

