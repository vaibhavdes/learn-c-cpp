#include<stdio.h>
#pragma pack(1)
#define SIZE 5

// See New thing Here - Struct inside Struct
struct emp
{
	int empno;
	char name[10];
	float sal;
	struct date
	{
		int dd; int mm; int yy;
	};
	struct date doj;
};

void AcceptEmpInfo(struct emp e[], int size);
void DisplayEmpInfo(struct emp e[], int size);
void SortByEmpSalAsc(struct emp e[], int size);

struct emp* SearchByEmpNo(struct emp e[], int size, int key);

int main(void)
{
	struct emp e1[SIZE], *ptr=NULL;
	int find;

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(e1, SIZE);

	printf("\n Employee info before sort :: ");
	DisplayEmpInfo(e1, SIZE);

	//SortByEmpSalAsc(e1, SIZE);
	//printf("\n Employee info after sort:: ");
	//DisplayEmpInfo(e1, SIZE);

	printf("\n Enter EmpNo to search :: ");
	scanf("%d", &find);

	ptr= SearchByEmpNo(e1, SIZE, find);
	if(ptr==NULL)
		printf("%d is not found ",find);
	else
	{
		printf("%d is found %d position",find,ptr-e1 );
		DisplayEmpInfo(ptr,1);
	}

	return 0;
}

struct emp* SearchByEmpNo(struct emp e[], int size, int key)
{
	int i;
	for(i=0; i<size; i++)
	{
		if( e[i].empno==key)
		{
			return (e+i);//return &e[i];
		}
	}
	return NULL;

}

void SortByEmpSalAsc(struct emp e[], int size)
{
	int i, j;
	struct emp temp;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
      // Uncomment Each Condition Line Below One By One and Try
			// if(strcmp(e[i].name,e[j].name)>0)  /// sort by empname in  asc order
			// if(strcmp(e[i].name,e[j].name)<0)  /// sort by empname in  desc order
			// if(e[i].empno<e[j].empno)  /// sort by empno in  desc order
			// if(e[i].empno>e[j].empno)  /// sort by empno in  asc order
			// if(e[i].sal<e[j].sal)  /// sort by sal in  desc order
			/*
        if(e[i].sal>e[j].sal)  /// sort by sal in  asc order
        {
          temp=e[i];
          e[i]=e[j];
          e[j]=temp;
        }
      */

			// sort by dateOfjoining (doj)
			//if(e[i]>e[j]) //error

			// you have to compare members of structure not variables of structure.
			if( e[i]. doj.yy> e[j].doj.yy)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
			else if( e[i]. doj.yy == e[j].doj.yy &&  e[i]. doj.mm > e[j].doj.mm)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
			else if( e[i]. doj.yy == e[j].doj.yy &&  e[i]. doj.mm == e[j].doj.mm&&  e[i]. doj.dd > e[j].doj.dd)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	return;
}

void AcceptEmpInfo(struct emp e[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\n Enter Emp No :: ");
		scanf("%d", &e[i].empno);

		printf("\n Enter Emp Name :: ");
		scanf("%s", e[i].name);

		printf("\n Enter Emp sal :: ");
		scanf("%f", &e[i].sal);

		printf("\n Enter date of joining in dd-mm-yy format :: ");
		scanf("%d%*c%d%*c%d", &e[i].doj.dd,  &e[i].doj.mm,  &e[i].doj.yy);
	}
	return;
}

void DisplayEmpInfo(struct emp e[], int size)
{
	int i;
	printf("\n EmpNo    Empname    Sal    Doj\n");
	for(i=0; i<size; i++)
	{
		printf("%-8d%-10s%6.2f \t [%d-%d-%d]\n", e[i].empno, e[i].name, e[i].sal , e[i].doj.dd,e[i].doj.mm, e[i].doj.yy);
	}
	return;
}
