#include <stdio.h>
#define SIZE 5
#define SWAP(n1,n2, DataType) { DataType temp; temp=n1; n1=n2; n2=temp;}

// Function Declaration
// Try Implementing One at a Time
void ReadArray(int a[], int size); // array notation //void ReadArray(int a[SIZE], int size);
void PrintArray(int *a, int size);// pointer notation
int ArraySum(int a[], int size);
int ArrayMax(int *a, int size);
void ArrayMaxMin(int *a, int size, int *pMax, int *pMin);
void ArrayRev(int *a, int size);
void swap(int *n1, int *n2);
void PrintRev(int *a, int size);
int SeqSearch(int *a, int size, int key);
int* LinearSearch(int *a, int size, int key);
void SelectionSortAsc(int *a, int size);
int MenuOperations();

int main( void )
{
	int arr[ SIZE ]; /// array
	int choice, ans=0, ans1=0, find, *ptr=NULL;
	do
	{
		choice= MenuOperations();
		switch(choice)
		{
			case 1: // Read Array
					printf("\n Enter elements of array :: \n ");
					ReadArray(arr, SIZE); // function call
					break;
			case 2 : // Print Array
					printf("\n Elements of array :: \n");
					PrintArray(arr, SIZE);// function call
					break;
			case 3: // array sum
					ans= ArraySum(arr, SIZE);
					printf("\n Array Sum =%d", ans);
					break;
			case 4: // array max
					ans= ArrayMax(arr, SIZE);
					printf("\n Array Max =%d", ans);
					break;
			case 5: // max min using pointers
					ArrayMaxMin(arr, SIZE,&ans, &ans1);
					printf("\n ans max in array=%d", ans);
					printf("\n ans1 min in array =%d", ans1);
					break;
			case 6: // rev array
					printf("\n Elements of array :: \n");
					PrintArray(arr, SIZE);// function call
					ArrayRev(arr, SIZE);
					printf("Rev Array :: ");
					PrintArray(arr, SIZE);
			case 7: //print rev
					printf("\n Elements of array :: \n");
					PrintArray(arr, SIZE);
					printf("\n Print Rev array :: \n");
					PrintRev(arr, SIZE);
					break;
			case 8: // seq search
					printf("\n Enter element to search :: ");
					scanf("%d", &find);

					ans= SeqSearch(arr, SIZE, find);

					if( ans==-1)
						printf("\n %d is not found in array", find);
					else
						printf("\n %d is  found in array at %d position", find, ans);

					break;

			case 9: //linear search
					printf("\n Enter element to search :: ");
					scanf("%d", &find);
					ptr= LinearSearch(arr, SIZE, find);
					if( ptr==NULL)
						printf("\n %d is not found in array", find);
					else
						printf("\n %d is  found in array at %d position", find, ptr-arr);
					break;
			case 10: // array selection sort asc
					printf("\n Elements of array :: \n");
					PrintArray(arr, SIZE);
					printf("\n Print array  Adter Sort :: \n");
					SelectionSortAsc(arr, SIZE);
					PrintArray(arr, SIZE);
					break;

		}
	} while(choice!=0);
	printf("\n\n\n\n");
	return 0;
}

// Function Definition 
void SelectionSortAsc(int *a, int size)
{
	int i, j, temp;

	for(i=0; i<size ; i++)
	{
		for(j=i+1; j<size; j++)
		{
			printf("\n a[%d]%d a[%d]%d", i, a[i], j, a[j]);

			//if( a[i]<a[j]) // desc

			if( a[i]>a[j]) // asc
			{
			 //	way1 using temp
				//*	temp=a[i];
				//	a[i] =a[j];
				//	a[j]=temp;*/

				//way2 using function
					//swap(&a[i], &a[j]);

				//way3 using macro
					SWAP(a[i], a[j], int);
			}
		}
		if(i<size-1)
			printf("\n pass %d", i+1);
	}
}
void swap(int *n1, int *n2)
{
	int temp=0;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
	return;
}
int MenuOperations()
{
	int choice;
	printf("\n 1. Accept Array \n 2. Print Array \n 3. Array Sum \n 4. Max of Array  \n 5. Max And Min Array");
	printf("\n 6.  Rev Array \n 7. Print Rev \n 8. Seq Search \n 9. Linear Search  \n 10. Selction Sort \n. 11. Binary Search ::  ");

	printf("\n Enter Your Choice :: ");
	scanf("%d", &choice);
	return choice;
}
// function defination
void ReadArray(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\n  a[%d]", i);
	//	scanf("%d", &a[i]); // array notation
	//	scanf("%d", &i[a]);
	//	scanf("%d", (a+i)); // pointer notation
		scanf("%d", (i+a));
	}
	a++; // here a is pointer
	return;
}
void PrintArray(int *a, int size)
{
	int i;
	printf("\n size of a=%d", sizeof(a));
	for( i=0; i<size; i++)
	{
		//printf("\n %d [%u]", a[i], &a[i]);  // array notation
		//printf("\n %d [%u]", i[a], &i[a]);
		//printf("\n %d [%u]", *(a+i), (a+i));
		  printf("\n %d [%u]", *(i+a), (i+a));
	}
	a++; // allowed a is pointer
	return;
}
int ArraySum(int a[], int size)
{
	int i, sum;
	for(i=sum=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int ArrayMax(int *a, int size)
{
	int i, max;

	for( max=a[0], i=1;i<size; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
void ArrayMaxMin(int *a, int size, int *pMax, int *pMin)
{
	int i;
	for(i=1,*pMin= *pMax=a[0]; i<size; i++)
	{
		if(a[i]>*pMax)
		{
			*pMax=a[i];
		}
		if(a[i]<*pMin)
		{
			*pMin=a[i];
		}
	}
	return;
}
void ArrayRev(int *a, int size)
{
	int i, j, temp;
	//for(i=0, j=size-1; i<size/2; i++, j--)
	//for(i=0, j=size-1; i<j; i++, j--)
	for(i=0, j=size-1; j>i; i++, j--)
	{
		// 1st way using temp
	 /*	temp=a[i];
		a[i]=a[j];
		a[j]=temp;*/

		///swap(&a[i], &a[j]) ; // way 2 using function

		SWAP(a[i], a[j], int) ; //way using macro

	}
	return;

}
void PrintRev(int *a, int size)
{
	int i;
	for(i=size-1; i>=0; i--)
	{
		printf("\n %d [%u]", *(a+i) , (a+i));
	}
	return;
}
int SeqSearch(int *a, int size, int key)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(*(a+i)== key)
			return i;
	}
	return -1; // not found
}
int* LinearSearch(int *a, int size, int key)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(*(a+i) == key)
			return &a[i]; //return (a+i);
	}
	return NULL; // not found
}
