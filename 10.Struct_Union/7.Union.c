#include<stdio.h>

// Union is different from Struct
typedef union test
{
	short int no;
	char name[2];
}TEST;

// short int 2 bytes & char name[2] ==2
int main(void)
{
	TEST e = {0};                             // Can be written as =>      // union test e = { 0 };
  
  // Uncomment below and try one by one
	//e.name[0] =   'a'; //'A';
	//e.name[1] =   'b'; //'B';
	e.no=25185;//e.no=16961;
	printf("\n Size of test::%d\n", sizeof(e));
	printf("\n no=%d \t%c\t %c\n",e.no,  e.name[0], e.name[1]);

	return 0;

}

/*

A	65	  01000001
B	66	  01000010

16961	  01000010 01000001
BA	    01000010 01000001
_______________________________________

a	97     01100001
b	98     01100010

25185  0110001001100001
ba     0110001001100001

*/
