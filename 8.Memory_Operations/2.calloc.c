#include <stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL;

	ptr = (int*) calloc(1,sizeof(int));
  
	if(ptr==NULL)
		printf("\n unable to allocate memory ");
    
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);
		printf("\n Enter *ptr=");
		scanf("%d", ptr);

		printf("\n *ptr=%d", *ptr);

		free(ptr);
		ptr=NULL;
		printf("\n memory is freed ");
	}
	return 0;
}
