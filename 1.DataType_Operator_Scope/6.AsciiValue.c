#include<stdio.h>
int main(void)
{
	int no1;
	char ch;

	printf("\n Enter No1 ::");
	scanf("%d",&no1);

	printf("\n no1=%d ", no1);

	printf("\n Enter Ch ::");
  getchar();                              //Work as Escape Character like Hitting Spacebar or Enter Button
	scanf("%c",&ch);
	//scanf("%*c%c",&ch);

	printf("\n ch=%d ch=%c", ch, ch);       // To display char with its ascii value

	return 0;
}

