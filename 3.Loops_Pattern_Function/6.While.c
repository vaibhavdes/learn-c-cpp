#include<stdio.h>
#include<stdlib.h>
int main(void)
{

    int no, counter ,fact;

		printf("\n Enter No ::");
		scanf("%d", &no);

		counter=0;
		fact=1;

		while(counter<no)
		{
			++counter; // counter= counter+1
			fact*=counter;//fact=fat*counter;
			printf(" %d ", counter);
			if(counter<no)
				printf("*");
		}
    
		printf("=%d", fact);
    
		//printf("\b=%d", sum);

	return 0;
}

