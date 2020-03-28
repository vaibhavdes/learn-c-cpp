#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

typedef int ELEMENT;
typedef int BOOL;

typedef struct
{
	ELEMENT eles[SIZE];
	int top;
} STACK;

void init_stack(STACK *stack)
{
	stack->top=-1;
}

ELEMENT peek_element(const STACK *stack)
{
	return stack->eles[stack->top];
}

BOOL is_empty(const STACK *stack)
{
	//1. initially stack created and it is empty no operagtions performed
	//2. after performing combination of operations on stack
	return stack->top==-1 ? TRUE : FALSE;
}

BOOL is_full(const STACK *stack)
{
	return stack->top==SIZE-1 ? TRUE : FALSE;
}

void pop_element(STACK *stack)
{
	//assume top most member is deleted
	stack->top--;//mange who will be next top

}

void push_element(STACK *stack,ELEMENT *ele)
{
	//manage top position to push new element
	stack->top++;
	//push element
	stack->eles[stack->top]=*ele;
}

BOOL is_operand(char opand)
{
	if(opand>=48 && opand<=57)
		return TRUE;
	else
		return FALSE;
}

BOOL is_operator(char opr)
{
	if(opr=='+' || opr=='-' || opr=='/' || opr =='*')
		return TRUE;
	else
		return FALSE;
}

int calculate(int n1,int n2,char opr)
{
	int ans;
	switch(opr)
	{
			case '+':
					ans= n1 + n2;
					break;
			case '-':
					ans= n1 - n2;
					break;
			case '/':
					ans= n1 / n2;
					break;
			case '*':
					ans= n1 * n2;
					break;

	}
	return ans;
}

int postfix_evaluation(char *postfix)
{
	STACK stack;
	int ans;
	int i=0;
	ELEMENT n1,n2;
	init_stack(&stack);

	while(postfix[i]!=NULL)
	{
		if(is_operand(postfix[i]))
		{
			if(!is_full(&stack))
			{
				push_element(&stack, &postfix[i]);
			}
		}
		else if(is_operator(postfix[i]))
		{
			if(!is_empty(&stack))
			{
				n2= peek_element(&stack);//right operand
				pop_element(&stack);
			}
			if(!is_empty(&stack))
			{
				n1= peek_element(&stack);//left operand
				pop_element(&stack);
			}
			ans = calculate(n1, n2,postfix[i]);
			if(!is_full(&stack))
			{
				push_element(&stack, &ans);
			}
		}
		i++;
	}

  //if postfix string is finished pop from stack whatever left is result
	if(!is_empty(&stack)) 
	{
		ans= peek_element(&stack);//left operand
		pop_element(&stack);
	}
	return ans;
  
}

int main(void) {
	char postfix[80];

	printf("\n specify postfix string to evaluate");
	gets(postfix);

	int result = postfix_evaluation(postfix);
	printf("\n result = %d",result);

	return EXIT_SUCCESS;
}
