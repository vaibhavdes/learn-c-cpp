#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int empid;
	char ename[20];
	float salary;
}EMPLOYEE;

void display_array_elements(EMPLOYEE *ptr);
int compare(const void *v1,const void *v2);

int main(void) {

	EMPLOYEE earr[5]={
				{101,"abc",1000.90},
				{102,"xyz",2000.90},
				{103,"qwe",590.00},
				{104,"ghj",670.00},
				{105,"mnb",450.56},
	};
  
	printf("\n Before sort \n");
	display_array_elements(earr);
  
	//qsort - first argument is base address of collection
	//qsort - second argument is how many elements exist in collection
	//qsort - third argument specifies what is size(scale factor) of every element
	//qsort - forth argument is which comparison code to be called

	qsort(earr,5,sizeof(EMPLOYEE),compare);
  
	printf("\n After sort \n");
	display_array_elements(earr);
  
	return EXIT_SUCCESS;
}

void display_array_elements(EMPLOYEE *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t%d %s %.2f",ptr[i].empid,ptr[i].ename,ptr[i].salary);
	}
}

int compare(const void *v1,const void *v2)//this function receives the address of two elements which are picked for comparision
{
	EMPLOYEE n1= *(EMPLOYEE *)v1;	//v1 and v2 here is void pointer so need to typecast
	EMPLOYEE n2= *(EMPLOYEE *)v2;
	return strcmp(n1.ename,n2.ename);
}
