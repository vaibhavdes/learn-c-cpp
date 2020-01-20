#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{

	int no1;
	char ch;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter Char :: ");
	getchar();
	scanf("%c", &ch);
  //scanf("%*c%c", &ch); // %*c will ingore char \n

  printf("\n no1=%d ch=%c ch=%d", no1, ch, ch);
	printf("\n no1=%o ", no1);
	printf("\n no1=%x ", no1);

{
  printf("abc \n xyz"); // \n new line char
	printf("\nabc \t xyz"); // \t tab 8 char
	printf("\a ") ; // beep \a alarm
  printf("abc\bd ") ; // \b backspace
  printf(" \"\ cpp \"\ ");
  printf(" \'\ cpp \'\ ");
  printf("  'cpp' ");

  printf(" \n \\n =%d", '\n');
  printf(" \n \\t =%d", '\t');
  printf(" \n \\b =%d", '\b');
  printf(" \n\\a =%d", '\a');
  printf(" \n\\r =%d", '\r');
 }
 
 return 0;
}
