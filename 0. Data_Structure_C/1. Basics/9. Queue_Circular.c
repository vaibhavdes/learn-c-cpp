#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0

typedef int ELEMENT;
typedef int BOOL;

typedef enum {EXIT,JOINELEMENT,LEAVEELEMENT,TRAVERSE} QUEUEOPERATIONS;
typedef struct
{
	ELEMENT eles[SIZE];	//queue of elements
	int front,rear;	//front and rear here will maintain always index of front and rear element
} QUEUE;

QUEUEOPERATIONS menu_choice()
{
	QUEUEOPERATIONS mchoice;
	printf("\n 0. EXIT");
	printf("\n 1. Add Element In Queue");
	printf("\n 2. Delete Element From Queue");
	printf("\n 3. Traverse Queue");
	scanf("%d",&mchoice);
	return mchoice;
}

void init_queue(QUEUE *queue)
{
	queue->rear=-1;
	queue->front=-1;
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		queue->eles[i]=-1;
	}
}

BOOL is_empty(const QUEUE *queue)
{
	//1. initially queue created and it is empty no operagtions performed //queue->rear==-1
	//2. after performing combination of operations on queue
	return queue->rear==-1  ? TRUE : FALSE;
}

ELEMENT peek_element(const QUEUE *queue)
{
	return queue->eles[queue->front];
}

void leave_element(QUEUE *queue)
{
	queue->eles[queue->front]=-1;	//assume front most member is deleted
	if(queue->rear==queue->front) //above statement has just deleted a single element which was exist and Q is empty
	{
		queue->rear=-1;
		queue->front=-1;
	}
	else
	{
		if(queue->front==SIZE-1)
			queue->front=0;	//while deleteing reach to size-1 thenin circular way reset to 0
		else
			queue->front++;//mange who will be next front
	}
	//or u can implement as
	/*
    if(queue->front==queue->rear)
    {
      queue->front=-1;queue->rear=-1
    }
    else
      queue->front++;
      
    //accordingly Q empty case will change
  */
}

BOOL is_full(const QUEUE *queue)
{
  //1. keep onadding element in Q till size-1 and no signle element is deleted
	//2. add elements till size-1 then delete no. of elements and and same no. of elements again Q is full
  
	return queue->rear==SIZE-1 && queue->front==0 || queue->rear+1==queue->front ? TRUE : FALSE;
}

void join_element(QUEUE *queue,ELEMENT *ele)
{
	//manage rear position to add new element
	if(queue->rear==SIZE-1)
		queue->rear=0;
	else
		queue->rear++;	//decide position for new element
	//add element
	queue->eles[queue->rear]=*ele;
	if(queue->front==-1) //means just above added very first element in queue
	{
		queue->front=0;//only manage when first element is added
	}
}

void traverse_queue(QUEUE *queue)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",queue->eles[i]);
	}
	printf("\t rear=%d front=%d",queue->rear,queue->front);
}

void accept_element(ELEMENT *ele)
{
	printf("\n Specify element to be pushed on queue");
	scanf("%d",ele);
}


int main(void) {
	QUEUE queue;
	QUEUEOPERATIONS mchoice;
	ELEMENT ele;
	init_queue(&queue);

	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case JOINELEMENT:
							//1. check if queue is full
							if(is_full(&queue)) //1.1 if queue is full
							{
								printf("\n queue is reached overflow state");//1.1.1show error
							}
							else
							{//1.2 if queue is not full
								accept_element(&ele);	//1.2.1. accept element
								join_element(&queue,&ele);	//1.2.2. push element on queue
							}
							break;
              
			case LEAVEELEMENT:
							if(is_empty(&queue))//1.1 if queue is empty
							{
								printf("\n queue is reached to underflow state");//1.1.1 show empty error
							}
							else //1.2 if queue is not empty
							{
								ele = peek_element(&queue); // retrieve top element from queue
								printf("\n ELEMENT : %d",ele);
								leave_element(&queue);	//delete top most element
							}
							break;
              
			case TRAVERSE:
							traverse_queue(&queue);
							break;
			}
	}
	return EXIT_SUCCESS;
}
