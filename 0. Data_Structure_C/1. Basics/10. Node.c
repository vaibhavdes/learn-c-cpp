
#include <stdio.h>
#include <stdlib.h>

typedef enum {EXIT,ADDFIRST,ADDLAST,ADDATPOS,TRAVERSE=8} MENUOPERATIONS;

typedef struct node
{
   int data;
   struct node *next;
} NODE;

NODE *head=NULL;

MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0. Exit");
	printf("\n 1. Add Element At First Position");
	printf("\n 8. Traverse  List");
	scanf("%d",&mchoice);
	return mchoice;
}

NODE * create_node()
{
	NODE *temp=NULL;
	temp = (NODE *)malloc(sizeof(NODE));
	temp->next=NULL;
	return temp;
}

void add_element_at_first(int data)
{
	NODE *newnode;
	//1. request memory for one node at runtime
	newnode = create_node();
	//2. assign data
	newnode->data=data;
	//3 attach element in list
	if(head==NULL)//3.1  if list is empty
	{
		head = newnode;//attach element
	}
	else//3.2 if list is ready
	{
			newnode->next = head;//attach
			head=newnode;
	}
}

void add_element_at_last(int data)
{
	NODE *newnode,*trav;
	//1. request memory for one node at runtime
	newnode = create_node();
	//2. assign data
	newnode->data=data;
	//3 attach element in list
	if(head==NULL)//3.1  if list is empty
	{
		head = newnode;//attach element
	}
	else//3.2 if list is ready
	{
		trav=head;

		while(trav->next!=NULL)
		{
			trav=trav->next;
		}//trav will point to exissting last node
		trav->next=newnode;

	}
}

void accept_data(int *data)
{
	printf("\n Specify data");
	scanf("%d",data);
}

void traverse_list()
{
	NODE *trav=head;
	if(head==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		while(trav!=NULL) //if any valid node visit
		{
			printf("%d-->",trav->data);
			trav=trav->next;	//move to next node taking address from current node
		}
	}
}

int main(void) {
	int data;
	MENUOPERATIONS mchoice;
	while((mchoice=menu_choice()))
	{
		switch(mchoice)
		{
			case ADDFIRST:
							accept_data(&data);
							add_element_at_first(data);
							break;
			case ADDLAST:
							accept_data(&data);
							add_element_at_last(data);
							break;
			case TRAVERSE:
							traverse_list();
							break;
		}
	}

	return EXIT_SUCCESS;
}
