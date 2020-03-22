#include<stdio.h>
#include<stdlib.h>

// Let's Store & Read Structured Employee Data to/from File

struct emp
{
	int empno;
	char empname[10];
	float sal;
};

void AcceptEmpInfo(struct emp *e);
void PrintEmpInfo(const struct emp *e);
void WriteEmpDataIntoTextFile();
void ReadEmpDataFronTextFile();
int MenuChoice();
int main(void)
{
	int choice;

	do
	{
		choice= MenuChoice();
		switch(choice)
		{
			default:
					printf("\n Invalid choice");
					continue;
			case 1: // add new record
					WriteEmpDataIntoTextFile();
					break;
			case 2: // print all records
					ReadEmpDataFronTextFile();
					break;
			case 0: // Exit
					exit(0);
		}

		printf("\n Enter 1 to continue or 0 to Exit ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;
}

int MenuChoice()
{
	int choice;
	printf("\n 1. Add New Employee \n 2. Print All Employee \n 0. Exit ");
	printf("\n Enter your choice :: ");
	scanf("%d", &choice);
	return choice;
}

void ReadEmpDataFronTextFile()
{
	struct emp e1;
	FILE *fpEmpRead=NULL;
	int counter=0;

	if((fpEmpRead= fopen("EmpInfo", "r"))==NULL)
		printf("\n unable to read data from text file");
	else
	{
		// read one(1st) record from text file
		//printf("\n EmpNo   Emp Name Emp Salary \n ");
		//fscanf(fpEmpRead,"\n%d %s %f", &e1.empno, e1.empname, &e1.sal);
		//PrintEmpInfo(&e1);

		// read all records from text file
		printf("\n EmpNo   Emp Name Emp Salary \n");
		while(fscanf(fpEmpRead,"\n%d %s %f", &e1.empno, e1.empname, &e1.sal)!=EOF)
		{
			counter++;
			PrintEmpInfo(&e1);
		}
		fclose(fpEmpRead);
		printf("\n %d records read from emp file", counter);
	}
	return;
}

void WriteEmpDataIntoTextFile()
{
	struct emp e1;
	FILE *fpEmpWrite=NULL;

	if ( (fpEmpWrite= fopen("EmpInfo", "a"))==NULL)
		printf("\n unable to open file for writing ...");
	else
	{
		AcceptEmpInfo(&e1);
		// wirte e1 data into file using fprint function
		fprintf(fpEmpWrite,"\n%d %s %f", e1.empno, e1.empname, e1.sal);
		fclose(fpEmpWrite);
		printf("\n emp record is added to file....");
	}
	return;
}

void AcceptEmpInfo(struct emp *e)
{
	fprintf(stdout,"\n Enter EmpNo :: ");
	fscanf(stdin,"%d", &e->empno);
	fprintf(stdout,"\n Enter Emp name :: ");
	fscanf(stdin,"%s", e->empname);
	fprintf(stdout,"\n Enter Emp sal :: ");
	fscanf(stdin,"%f", &e->sal);
	return;
}

void PrintEmpInfo(const struct emp *e)
{
	printf("%-8d%-10s%-8.2f\n", e->empno, e->empname, e->sal);
	return;
}
