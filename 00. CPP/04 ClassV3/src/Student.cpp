#include<cstdio>
#include"../include/Student.h"
void Student::acceptRecord( void )
{
	printf("Name	:	");
	scanf("%s",name);

	printf("Roll Number	:	");
	scanf("%d", &rollNumber);

	printf("Marks	:	");
	scanf("%f",&marks);
}
void Student::printRecord( void )
{
	printf("Name	:	%s\n",name);
	printf("Roll Number	:	%d\n",rollNumber);
	printf("Marks	:	%f\n",marks);
}
