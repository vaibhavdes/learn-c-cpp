#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

typedef int ELEMENT;
typedef int BOOL;

typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT} STACKOPERATIONS;

typedef struct
{
	ELEMENT eles[SIZE];
	int top;
} STACK;

STACKOPERATIONS menu_choice()
{
	STACKOPERATIONS mchoice;
	printf("\n 0. EXIT");
	printf("\n 1. Push Element In Stack");
	printf("\n 2. Pop Element From Stack");
	printf("\n 3. Peek Element From Stack");
	scanf("%d",&mchoice);
	return mchoice;
}

void init_stack(STACK *stack)
{
  // initialize stack
	stack->top=-1;
}

BOOL is_empty(const STACK *stack)
{
	//1. initially stack created and it is empty no operagtions performed
	//2. after performing combination of operations on stack
	return stack->top==-1 ? TRUE : FALSE;
}

ELEMENT peek_element(const STACK *stack)
{
	return stack->eles[stack->top];
}

void pop_element(STACK *stack)
{
	//assume top most member is deleted
	stack->top--;//mange who will be next top
}

BOOL is_full(const STACK *stack)
{
  // check if its full
	return stack->top==SIZE-1 ? TRUE : FALSE;
}

void push_element(STACK *stack,ELEMENT *ele)
{
	//manage top position to push new element
	stack->top++;
	//push element
	stack->eles[stack->top]=*ele;
}

void accept_element(ELEMENT *ele)
{
	printf("\n Specify element to be pushed on stack");
	scanf("%d",ele);
}

int main(void) {
	STACK stack;
	STACKOPERATIONS mchoice;
	ELEMENT ele;
	init_stack(&stack);

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case PUSHELEMENT:
							//1. check if stack is full
							if(is_full(&stack))                                                   //1.1 if stack is full
							{
								printf("\n stack is reached overflow state");                       //1.1.1show error
							}
							else   //1.2 if stack is not full
							{               
								accept_element(&ele);	//1.2.1. accept element
								push_element(&stack,&ele);	//1.2.2. push element on stack
							}
							break;
              
			case POPELEMENT:
							if(is_empty(&stack))                                                   //1.1 if stack is empty
							{
								printf("\n stack is reached to underflow state");                   //1.1.1 show empty error
							}
							else    //1.2 if stack is not empty
							{              
								ele = peek_element(&stack); // retrieve top element from stack
								printf("\n ELEMENT : %d",ele);
								pop_element(&stack);	//delete top most element
							}
							break;
              
			case PEEKELEMENT:
							if(is_empty(&stack))                                                   //1.1 if stack is empty
							{
								printf("\n stack is reached to underflow state");                   //1.1.1 show empty error
							}
							else //1.2 if stack is not empty
							{
								ele = peek_element(&stack); // retrieve top element from stack
								printf("\n ELEMENT : %d",ele);
							}
							break;
			}
	}
	return EXIT_SUCCESS;
}
