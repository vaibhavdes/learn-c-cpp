#include<stdio.h>
int main(void)
{
	char ch;
  
	FILE *fpRead=NULL;
	unsigned int counter,alphabets, digits, tabs, lines , spaces;
	fpRead=fopen("file1.txt", "r");                                         // read mode
  
	if(fpRead==NULL)
		printf("\n unable to open file for reading");
	else
	{
		counter=alphabets= digits= tabs= lines= spaces=0;

		while(	(ch= fgetc(fpRead))!=EOF)
		{
			fputc(ch,stdout);
			counter++;
			if ((ch>=65 &&ch<=90) || (ch>=65 && ch<=122))
				alphabets++;
			else if(ch>=48 && ch<=57)
				digits++;
			else if(ch=='\t')
				tabs++;
			else if(ch==' ' || ch==32)
				spaces++;
			else if(ch=='\n' || ch==10)
				lines++;
		}
		fclose(fpRead);
    
		printf("\n no of char =%d", counter);
		printf("\n no of lines =%d", lines);
		printf("\n no of tabs =%d", tabs);
		printf("\n no of spaces =%d",spaces);
		printf("\n no of digits =%d", digits++);
		printf("\n no of alphabets =%d", alphabets);

		printf("\n Data is read from file.....");
	}
	return 0;

}

