#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	char ch;

	printf("\n Enter Char :: ");
	scanf("%c", &ch);

	printf("\n ch=%c ch=%d", ch, ch);

	// convert to small letter from capital letter
  //refer ascii value of character
	if(ch>=65 && ch<=90)
	{
		ch+=32;//ch=ch=32;
	}
	printf("\n ch=%c ch=%d", ch, ch);

	return 0;
}
