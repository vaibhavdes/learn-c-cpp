#include<stdio.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};

// Having a Pen Name
struct emp e;

void AcceptEmpInfo(void);
void DisplayEmpInfo(void);

int main(void)
{
	printf("\n Enter Emp info :: ");
	AcceptEmpInfo();

	printf("\n Employee info :: ");
	DisplayEmpInfo();
	return 0;
}

void AcceptEmpInfo(void)
{
	printf("\n Enter Emp No :: ");
	scanf("%d", &e.empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e.name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e.sal);
	return;
}

void DisplayEmpInfo(void)
{
	//e->sal=0;
	printf("\n EmpNo Empname Sal using struct emp variable\n");
	printf("%-6d%-10s%6.2f\n", e.empno, e.name, e.sal);
	return;
}
