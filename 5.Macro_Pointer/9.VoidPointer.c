#include <stdio.h>
int main()
{
	int a = 3;
	char c = 'A';
	float f= 10.2f;

	void *p=NULL;                                         /*void pointer declaration*/

	int *ptr = NULL;
	++ptr;

	p = &a;                                               /*pointer initialization with int address. no cast required*/

  // Error Statement are Commented - Do try it
	// printf("*p=%d", *p);                               //error as p is void pointer

	printf("*p=%d ", *(int*)p);
	                                                        /*need cast to use value at operator*/

	p = &c;                                                /*assigning char address. no cast required*/

	printf("*p=%c\n", *(char*)p);                         /*need cast to use value at operator*/

	p=&f;
	printf("*p=%f\n", *(float*)p);
	                                                      /*need cast to use value at operator*/

	printf("\n p=%u", p);
	++p;                                                  /*compiler error. pointer arithmetic not allowed*/
	printf("\n p=%u", p);

	return 0;
}
