
#include <stdio.h>
#include <stdlib.h>

typedef enum {EXIT,ADDFIRST,ADDLAST,ADDATPOS,DELFIRST,DELLAST,DELFROMPOS,REVERSE,TRAVERSE} MENUOPERATIONS;

typedef struct node
{
   int data;
   struct node *next;
}NODE;

NODE *head=NULL;

MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0. Exit");
	printf("\n 1. Add Element At First Position");
	printf("\n 2. Add Element At Last Position");
	printf("\n 3. Add Element At given Position");
	printf("\n 4. Delete Element From First Position");
	printf("\n 5. Delete Element From LAst Position");
	printf("\n 6. Delete Element From given Position");
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
	NODE *newnode,*trav;
	//1. request memory for one node at runtime
	newnode = create_node();
	//2. assign data
	newnode->data=data;
	//3 attach element in list
	if(head==NULL)//3.1  if list is empty
	{
		head = newnode;//attach element
		newnode->next=head;
	}
	else//3.2 if list is ready
	{
			trav=head;
			while(trav->next!=head)
			{
				trav=trav->next;
			}			
		
			newnode->next = head;//attach
			head=newnode;
			trav->next=head;
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
		do //if any valid node visit
		{
			printf("%d-->",trav->data);
			trav=trav->next;	//move to next node taking address from current node
		}while(trav!=head);
	}
}
void traverse_reverse(NODE *trav)
{
	if(trav==NULL)
		return ;
	traverse_reverse(trav->next);
	printf("%d-->",trav->data);
}

int count_nodes()
{
	NODE *trav=head;
	int count=0;
	while(trav!=NULL) //if any valid node visit
	{
		count++;

		trav=trav->next;	//move to next node taking address from current node
	}
	return count;
}

void add_element_at_given_pos(int data,int pos)
{
	NODE *newnode,*trav;
	int p=1;
	if(pos==1)
		add_element_at_first(data);
	else if(pos==count_nodes()+1)
		add_element_at_last(data);
	else
	{
		newnode = create_node();
		newnode->data=data;
		trav=head;
		while(p < pos-1)
		{
			trav=trav->next;
			p++;
		}//traverse till the node next to which nn to be attached
		newnode->next=trav->next;
		trav->next=newnode;
	}
}

void del_element_from_first()
{
	NODE *temp=head;
	head=head->next;
	free(temp);
	temp=NULL;
}

void del_element_from_last()
{
	NODE *trav=head,*prev=NULL;
	while(trav->next!=NULL)
	{
		prev = trav; //present trav pointed by node becomes prev of next node
		trav=trav->next; //move to next node
	}//traverse till last node and maintain prev every time before traverse ahead
	if(prev==NULL)//if there is only one node above loop execution is skipped and prev retains as null indicates single node in list
	{
		head=NULL;
	}//there is only one node linked list
	else
		prev->next=NULL;//when there are multiple nodes in list then only need to change second last node next address
	free(trav);
	trav=NULL;
}

void free_list()
{
	while(head!=NULL)
	{
		del_element_from_first();
	}
}

void del_element_from_given_pos(int pos)
{
	NODE *trav,*temp;
	int p=1;
	if(pos==1)
		del_element_from_first();
	else if(pos==count_nodes())
		del_element_from_last();
	else
	{
		trav=head;
		while(p < pos-1)
		{
			trav=trav->next;
			p++;
		}//traverse till node next to whichnode is to be deleted
		temp=trav->next;//main address of node which is to be deleted
		trav->next= temp->next;
		free(temp);
		temp=NULL;
	}
}

void reverse_list()
{
	NODE *curr=head,*left=NULL,*right;

	while(curr!=NULL)
	{
		right=curr->next;
		curr->next=left;
		left=curr;
		curr=right;
	}
	head=left;
}

int main(void) {
	int data,pos;
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
			case ADDATPOS:
							printf("\n Specify position for new element");
							scanf("%d",&pos);
							if(pos<=0 || pos > count_nodes()+1)
								printf("\n Invalid position");
							else
							{
								accept_data(&data);
								add_element_at_given_pos(data,pos);
							}
							break;
			case DELFIRST:
							del_element_from_first();
							break;
			case DELLAST:
							del_element_from_last();
							break;
			case DELFROMPOS:
							printf("\n Specify position to delete element from");
							scanf("%d",&pos);
							if(pos<=0 || pos > count_nodes())
								printf("\n Invalid position");
							else
							{
								del_element_from_given_pos(pos);
							}
							break;
			case TRAVERSE:
							printf("\n Forward Direction Traversal \n");
							traverse_list();
							printf("\n Backward Direction Traversal \n");
							traverse_reverse(head);
							break;
			case REVERSE:
							reverse_list();
							break;
		}
	}

	free_list();
	return EXIT_SUCCESS;
}
