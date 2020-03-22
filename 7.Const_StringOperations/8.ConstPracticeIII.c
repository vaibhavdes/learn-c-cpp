#include <stdio.h>
int main()
{
	int b=10;
	const int * const p = &b; //OR int const * const p = &b;
  
	//cannot modify the value at the address stored in pointer p using p
	//also cannot modify the address stored in the pointer.
	printf("%d", *p);

	/*
	*p = 5;
	++*p;
	(*p)++;
	p = &c;
	p++;
	*p++;*/

	return 0 ;
}
