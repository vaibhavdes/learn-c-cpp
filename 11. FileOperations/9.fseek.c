#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;
	FILE *fpRead=NULL;

	if( ( fpRead= fopen("file1.txt", "r"))==NULL)
		printf("\n unable to opern file for reading");
	else
	{
		// to go to last char in file
		fseek(fpRead, -1L,2);
		do
		{
			ch= fgetc(fpRead);
			/*if(ch=='\n')
				fseek(fpRead, -1L, 1); */  //for window add this line
			printf("%c", ch);
			//getchar();
		}while( !fseek(fpRead, -2L, 1));
	}
	fclose(fpRead);

	return 0;
}
