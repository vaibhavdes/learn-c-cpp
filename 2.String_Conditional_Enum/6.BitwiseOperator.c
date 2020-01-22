#include <stdio.h>
int main()
{  

	short a = 12, b = 5;  
	
	short c = a & b;		// bitwise AND
	
	short d = a | b;		// bitwise OR  
	
	short e = a ^ b;		// biwise XOR
	
	short f = ~a;			// biwise NOT   
	
	short g = b << 2;		// left shift
	
	short h = b >> 1;		// right shift   
	
	printf("c=%d  d=%d  e=%d  f=%X  g=%d  h=%d", c, d, e, f, g, h); 
	return 0;

}  

