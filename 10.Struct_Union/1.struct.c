#include<stdio.h>
#pragma pack(1)                            // struct member alligment 1 byte
 
// Sample Structue to Store Employee Detail
struct emp
{
	int empno;
	char name[10];
	float sal;
};                                        // slack bytes

int main(void)
{

	struct emp e1={111};
	struct emp *ptr=&e1;

  // This will help you understand how much size does struct hold
	printf("\n sizeof(e1)=%d", sizeof(e1));
	printf("\n size of struct emp (%d)", sizeof(struct emp));
	printf("\n sizeof(ptr)=%d", sizeof(ptr));

	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);


  // Using Struct to Store Employee Details
	printf("\n Enter Emp info :: ");

  // Employee Details Input 
	printf("\n Enter Emp No :: ");
	scanf("%d", &e1.empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e1.name);
	printf("\n Enter Emp sal :: ");
	scanf("%f", &e1.sal);

  // Display Data using Struct Variable
	printf("\n EmpNo Empname Sal \n");
	printf("%-6d%-10s%6.2f\n", e1.empno, e1.name, e1.sal);

  // Display Data using Pointer Variable Reference
	printf("\n EmpNo Empname Sal \n");
	printf("%-6d%-10s%6.2f\n", ptr->empno, ptr->name, ptr->sal);

  // Display Data using Pointer Variable
	printf("\n EmpNo Empname Sal \n");
	printf("%-6d%-10s%6.2f\n", (*ptr).empno, (*ptr).name, (*ptr).sal);

	return 0;
}
