#include<stdio.h>
int main(void)
{
	char ch;
	FILE *fpWrite=NULL;

  // Uncomment any of below line  any try OR it will give an error
  
	// fpWrite=fopen("file1.txt", "w"); // write mode (Erase and Add New Data)
	// fpWrite=fopen("file1.txt", "a"); // append mode (Add New Data to Older without erasing)
  
	if(fpWrite==NULL)
		printf("\n unable to open file for writing");
	else
	{
		while(	(ch= fgetc(stdin))!=EOF)
		{
			fputc(ch,fpWrite);
		}
		fclose(fpWrite);
		printf("\n Data is added to file.....");
	}
	return 0;

}

