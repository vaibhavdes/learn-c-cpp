#include<stdio.h>
//declaration
void table(int n);
int table_no(int n, int c);

int main(void)
{
	int no, i;
	printf("\n Enter no :: ");
	scanf("%d", &no);

	printf("\n printing table in side main \n");
	for(i=1; i<=10; i++)
	{
		printf("\n%d * %d = %d", no, i, table_no(no, i));
	}
	table(no);
	return 0;
}


//definition
int table_no(int n, int c)
{
	return n*c;
}

void table(int n)
{
	int counter;
	printf("\n inside function table :: \n");
	for(counter=1; counter<=10; counter++)
	{
		printf("%d * %d = %d\n", n, counter, n*counter);
	}
	return;
}
