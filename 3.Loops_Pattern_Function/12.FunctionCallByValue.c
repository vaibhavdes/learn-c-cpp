#include<stdio.h>

// 1. function decl or proto type function
//    return_type fuction_name(data_type parametername1);
//    output function_name(input);

int addition(int n1, int n2);
int main(void)
{
	int no1=10, no2=20, ans=0;

	ans = addition(no1, no2);           // 3. function call
  
  
	// no1 , no2 actual arguments
	printf("%d + %d =%d", no1, no2, ans);


	return 0;
}
  
  //  2. function defination or logic of fun
 //       n1, n2 are formal arguments
 
int addition(int n1, int n2)
{
	int temp=0;
	temp=n1+n2;
	return temp;
}


// return 10 ; return type int
// return 10.1 ; return type double
// return 10.1f ; return type float
// return 10.1F ; return type float
// return 'A' ; return type char
// return ; // return type void  nothing
// return "CLanguage" ; return type ????



