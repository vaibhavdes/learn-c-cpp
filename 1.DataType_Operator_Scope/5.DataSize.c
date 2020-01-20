#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{

  char ch;
	int no=5;
	printf("\n sizeof(10)=%d", sizeof(10));
	printf("\n sizeof(10.2)=%d ", sizeof(10.2));
	printf("\n sizeof(10.2f)=%d ", sizeof(10.2f));
	printf("\n sizeof(10.2F)=%d ", sizeof(10.2F));
	printf("\n sizeof(ch)=%d ", sizeof(ch));
	printf("\n sizeof('A')=%d ", sizeof('A'));
	printf("\n sizeof(no++)=%d",sizeof(no++));
	printf("\n no=%d", no);
  
  printf("\n int %%d %d %d to %d", sizeof(int), INT_MIN, INT_MAX);

  //this is a single line comments

  //Uncomment and Run Below Lines of Code
	/*
  int no1, no2;
	printf("\n  Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n  Enter No2 :: ");
	scanf("%d", &no2);

	printf("\n no1=%d [%u] no2=%d[%u]", no1,&no1,  no2, &no2);
	*/
  
	return EXIT_SUCCESS;  //return 0  & exit(0) Find the Difference
 }
