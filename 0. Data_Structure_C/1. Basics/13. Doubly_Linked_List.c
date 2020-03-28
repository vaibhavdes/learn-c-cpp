
#include <stdio.h>
#include <stdlib.h>

typedef enum {EXIT,ADDFIRST,ADDLAST,ADDATPOS,DELFIRST,DELLAST,DELFROMPOS,REVERSE,TRAVERSE} MENUOPERATIONS;

typedef struct node
{
   struct node *prev;
   int data;
   struct node *next;
} NODE;

typedef struct
{
	NODE *head,*tail;
}LIST;

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
	printf("\n 7. Reverse List");
	printf("\n 8. Traverse  List");
	scanf("%d",&mchoice);
	return mchoice;
}

NODE * create_node()
{
	NODE *temp=NULL;
	temp = (NODE *)malloc(sizeof(NODE));
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}

void add_element_at_first(LIST *list,int data)
{
	NODE *newnode;
	//1. request memory for one node at runtime
	newnode = create_node();
	//2. assign data
	newnode->data=data;
	//3 attach element in list
	if(list->head==NULL)//3.1  if list is empty
	{
		list->head = newnode;//attach element
		list->tail = newnode;
	}
	else//3.2 if list is ready
	{
			newnode->next = list->head;//attach
			list->head->prev=newnode;
			list->head=newnode;
	}
}

void add_element_at_last(LIST *list,int data)
{
	NODE *newnode,*trav;
	//1. request memory for one node at runtime
	newnode = create_node();
	//2. assign data
	newnode->data=data;
	//3 attach element in list
	if(list->head==NULL)//3.1  if list is empty
	{
		list->head = newnode;//attach element
		list->tail = newnode;//attach element
	}
	else//3.2 if list is ready
	{
		newnode->prev=list->tail;
		list->tail->next=newnode;
		list->tail=newnode;
	}
}

void accept_data(int *data)
{
	printf("\n Specify data");
	scanf("%d",data);
}
void traverse_list(LIST *list)
{
	NODE *trav=list->head;
	if(list->head==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		printf("\n Traverse in Forward Direction\n");
		while(trav!=NULL) //if any valid node visit
		{
			printf("%d-->",trav->data);
			trav=trav->next;	//move to next node taking address from current node
		}

		printf("\n Traverse in Backward Direction\n");
		trav=list->tail;
		while(trav!=NULL) //if any valid node visit
		{
			printf("%d-->",trav->data);
			trav=trav->prev;	//move to next node taking address from current node
		}
	}
}

void traverse_reverse(NODE *trav)
{
	if(trav==NULL)
		return ;
	traverse_reverse(trav->next);
	printf("%d-->",trav->data);
}

int count_nodes(LIST *list)
{
	NODE *trav=list->head;
	int count=0;
	while(trav!=NULL) //if any valid node visit
	{
		count++;

		trav=trav->next;	//move to next node taking address from current node
	}
	return count;
}

void add_element_at_given_pos(LIST *list,int data,int pos)
{
	NODE *newnode,*trav;
	int p=1;
	if(pos==1)
		add_element_at_first(list,data);
	else if(pos==count_nodes(list)+1)
		add_element_at_last(list,data);
	else
	{
		newnode = create_node();
		newnode->data=data;
		trav=list->head;
		while(p < pos-1)
		{
			trav=trav->next;
			p++;
		}//traverse till the node next to which nn to be attached
		newnode->next=trav->next;
		newnode->prev= trav;
		trav->next->prev=newnode;
		trav->next=newnode;
	}
}

//make necessary changes for doubly linked list
void del_element_from_first(LIST *list)
{
	NODE *temp=list->head;
	list->head=list->head->next;
	if(list->head==NULL)
	{
		list->tail=NULL;
	}
	else
		list->head->prev=NULL;

	free(temp);
	temp=NULL;
}
//make necessary changes for doubly linked list
void del_element_from_last(LIST *list)
{
	NODE *trav=list->head,*prev=NULL;
	free(trav);
	trav=NULL;
}

void free_list(LIST *list)
{
	while(list->head!=NULL)
	{
		del_element_from_first(list);
	}
}
//make necessary changes for doubly linked list
void del_element_from_given_pos(LIST *list,int pos)
{
	NODE *trav,*temp;
	int p=1;
	if(pos==1)
		del_element_from_first();
	else if(pos==count_nodes())
		del_element_from_last();
	else
	{
		trav=list->head;
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

void init_list(LIST *list)
{
	list->head=NULL;
	list->tail=NULL;
}

int main(void) {
	int data,pos;
	MENUOPERATIONS mchoice;
	LIST list;

	init_list(&list);

	while((mchoice=menu_choice()))
	{
		switch(mchoice)
		{
			case ADDFIRST:
							accept_data(&data);
							add_element_at_first(&list,data);
							break;
			case ADDLAST:
							accept_data(&data);
							add_element_at_last(data);
							break;
			case ADDATPOS:
							printf("\n Specify position for new element");
							scanf("%d",&pos);
							if(pos<=0 || pos > count_nodes(&list)+1)
								printf("\n Invalid position");
							else
							{
								accept_data(&data);
								add_element_at_given_pos(&list,data,pos);
							}
							break;
			case DELFIRST:
							del_element_from_first(&list);
							break;
			case DELLAST:
							del_element_from_last(&list);
							break;
			case DELFROMPOS:
							printf("\n Specify position to delete element from");
							scanf("%d",&pos);
							if(pos<=0 || pos > count_nodes(&list))
								printf("\n Invalid position");
							else
							{
								del_element_from_given_pos(&list,pos);
							}
							break;
			case TRAVERSE:
							printf("\n Forward Direction Traversal \n");
							traverse_list(&list);
							break;

		}
	}

	free_list(&list);
	return EXIT_SUCCESS;
}
