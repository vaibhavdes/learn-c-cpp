#include<stdio.h>
#define SIZE 40
int main(void)
{
	int counter=0;
	char Word[SIZE];
	FILE *fpWordRead=NULL;

  // File Name Needs to Pass and File Present in Directory
	if((fpWordRead= fopen("file1.txt", "r"))==NULL)
		printf("\n unable to read file");
	else
	{
		while(fscanf(fpWordRead,"%s", Word)!=EOF)
		{
			printf("\n %d ] %s", ++counter, Word);
		}
		fcloseall();
		printf("\n %d words read from file", counter);

	}
  
	return 0;
}
