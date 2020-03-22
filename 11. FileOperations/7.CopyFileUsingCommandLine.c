#include<stdio.h>

int main(int argc,char *argv[], char *envp[])
{
	char ch;
	FILE *fpSrc=NULL, *fpDest=NULL;

  // Remember 0th i.e 1st Argument is Program File Name itself
  // Read  2nd Command Line Argument i.e File from which data to be copied
	fpSrc = fopen(argv[1], "r"); // read mode
  
	if(fpSrc==NULL)
		printf("\n unable to open file for reading");
	else
	{
    // Read  3rd Command Line Argument i.e FileName to where data to be copied
		fpDest= fopen (argv[2], "w");
		while(	(ch= fgetc(fpSrc))!=EOF)
		{
			fputc(ch,fpDest); // write into file
			fputc(ch, stdout); // print on console
		}
		fcloseall();
		printf("\n data write into  %s to %s file ", argv[1], argv[2]);
	}
	return 0;

}
