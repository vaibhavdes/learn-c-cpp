#include<stdio.h>
#pragma pack(1) // struct member alligment 1 byte
// Structure Declaration
// PS: Class is extended version of Struct concept (With Methods) Hope you got this :-)
struct emp
{
	int empno;
	char name[10];
	float sal;
}; // always use semicolon unlike java

// Function Declaration
void AcceptEmpInfo(struct emp e);
void DisplayEmpInfo(struct emp e);

int main(void)
{
	struct emp e1;

	printf("\n Enter Emp info :: ");
	AcceptEmpInfo(e1);

	printf("\n Employee info :: ");
	DisplayEmpInfo(e1);
	return 0;
}

// Function Definition
void AcceptEmpInfo(struct emp e)
{
	printf("\n Enter Emp No :: ");
	scanf("%d", &e.empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e.name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e.sal);
	printf("\n in accept fun \n");
	DisplayEmpInfo(e);
	return;

}

void DisplayEmpInfo(struct emp e)
{
	printf("\n EmpNo Empname Sal using struct emp variable\n");
	printf("%-6d%-10s%6.2f\n", e.empno, e.name, e.sal);
	return;
}
