#include<stdio.h>
#define SIZE 40
int main(void)
{
	char buff[SIZE];
	FILE *fpRead=NULL;

  // File Name Here
	fpRead=fopen("file1.txt", "r"); // read mode
  
	if(fpRead==NULL)
		printf("\n unable to open file for reading");
	else
	{
		while( fgets(buff, SIZE, fpRead)!=NULL)
		{
			fputs(buff ,stdout);
			//getchar();
		}
		fclose(fpRead);
		printf("\n Data is read from file.....");
	}
	return 0;

}
