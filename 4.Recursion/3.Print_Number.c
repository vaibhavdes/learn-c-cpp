#include<stdio.h>
void fun();
int no=0;
int main(void)
{
fun();
	return 0;
}
void fun()
{
	//static int no=0;
	//getchar();
	if(no>=10)
		return;
	else
	{
		++no;
		printf(" \n%d [%u]", no, &no);
		fun();
	}
}
