#include<stdio.h>
#define SIZE 40
int main(void)
{
	char buff[SIZE];
	FILE *fpWrite=NULL;

	fpWrite=fopen("file1.txt", "a"); // append mode
  
	if(fpWrite==NULL)
		printf("\n unable to open file for writing");
	else
	{
		while(fgets(buff, SIZE, stdin)!=NULL)
		{
			fputs(buff,fpWrite);
		}
		fclose(fpWrite);
		printf("\n Data is added to file.....");
	}
	return 0;

}
