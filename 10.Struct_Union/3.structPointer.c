#include<stdio.h>
#pragma pack(1)                                             // struct member alligment 1 byte

struct emp
{
	int empno;
	char name[10];
	float sal;
};                                                         // slack bytes

void AcceptEmpInfo(struct emp *e);                        // struct emp *e == 4 or 8

// Using Constant in Function argument, will not allow function to do any data modification 
// void DisplayEmpInfo(struct emp e);                     // struct emp e=18
void DisplayEmpInfo(const struct emp *e);                 // struct emp *e == 4 or 8

int main(void)
{
	struct emp e1;

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(&e1);

	printf("\n Employee info :: ");
	DisplayEmpInfo(&e1);
	return 0;
}

void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter Emp No :: ");
	scanf("%d", &e->empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e->name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e->sal);
	return;
}

void DisplayEmpInfo(const struct emp *e)
{
	//e->sal=0;
	printf("\n EmpNo Empname Sal using struct emp variable\n");
	printf("%-6d%-10s%6.2f\n", e->empno, e->name, e->sal);
	return;
}
