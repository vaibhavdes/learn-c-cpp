
#include <stdio.h>
int main()
{
		int b=10;
		const  int *p=&b; //or  int const *p = &b;
		p=&b; //allowed

		printf("\n b=%d *p=%d", b, *p);
		*p++; //*p++ is treated as *(p++); //allowed
		printf("\n b=%d *p=%d", b, *p);

		printf("\n p=%u p+1=%u", p, p+1);
		p++; // allowed
		printf("\n p=%u p+1=%u", p, p+1);

		//*p = 5; // error
		//++*p;   //  ++*p; //++(*p) // error
		//(*p)++; //error

		return 0;
}
