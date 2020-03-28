#include<stdio.h>

struct Student
{
	char name[ 30 ];
	int rollNumber;
	float marks;
};

void accept_record( struct Student *ptr )
{
	printf("Name	:	");
	scanf("%s",ptr->name);

	printf("Roll Number	:	");
	scanf("%d", &ptr->rollNumber);

	printf("Marks	:	");
	scanf("%f",&ptr->marks);
}

void print_record( struct Student *ptr )
{
	printf("Name	:	%s\n",ptr->name);
	printf("Roll Number	:	%d\n",ptr->rollNumber);
	printf("Marks	:	%f\n",ptr->marks);
}

int main( void )
{

	struct Student s1;
	accept_record( &s1 );
	print_record( &s1 );
	return 0;
}
