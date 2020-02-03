#include<stdio.h>
//int no=0;
int main(void)
{
	static int no=0;
	//getchar();
	if(no>=10)
		return 0;
	else
	{
		++no;
		printf(" \n%d [%u]", no, &no);
		main();
	}

	return 0;
}
