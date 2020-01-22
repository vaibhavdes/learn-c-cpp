#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	char ch;

	printf("\n Enter Something :: ");
	scanf("%c", &ch);

	printf("\n ch=%c ch=%d", ch, ch);

	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n %c is vol", ch);
	}
	else if(ch>=97  && ch<=122)
		printf("\n %c is con", ch);z
	else if (ch>=48 && ch<=57)
		printf("\n %c is digit", ch);
	else
		printf("\n %c is other  char", ch);

	return 0;
}
