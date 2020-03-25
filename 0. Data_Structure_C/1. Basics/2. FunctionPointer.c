#include <stdio.h>
#include <stdlib.h>

// Function Definition
void show(void)
{
	printf("\n inside show()");
}
void display(void)
{
	printf("\n inside display()");
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}

int main(void) {

	printf("\n main = %u",main);
	printf("\n show = %u",show);
	printf("\n display = %u",display);

	void (*fnptr)();                  // fnptr is a pointer to such a function who do not return anything and which do not take any argument
	printf("\n size = %u" , sizeof(fnptr));

	fnptr=show;
	show();                           // call to function normal way

	(*fnptr)();                       //call to function via fnptr (Function Pointer)

	fnptr=display;
	display();                        //call to function normal way
	(*fnptr)();                       //call to function via fnptr

	int (*fptr)(int ,int);
	int result;
                                    //fptr is a pointer to such a function which takes first argument as integer
                                    //second argument as integer and in return returns int

	fptr=add;
	result= add(2,5);
	printf("\n result = %d",result);
	result = (*fptr)(2,5);
	printf("\n result = %d",result);

	fptr=sub;
	result= sub(2,5);
	printf("\n result = %d",result);
	result = (*fptr)(2,5);
	printf("\n result = %d",result);

	fptr=mul;
	result= mul(2,5);
	printf("\n result = %d",result);
	result = (*fptr)(2,5);
	printf("\n result = %d",result);

	return EXIT_SUCCESS;
}
