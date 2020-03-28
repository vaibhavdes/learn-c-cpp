#include<stdio.h>

class Student
{

private:
	char name[ 30 ];
	int rollNumber;
	float marks;
  
public:
	void acceptRecord( void )
	{
		printf("Name	:	");
		scanf("%s",name);

		printf("Roll Number	:	");
		scanf("%d", &rollNumber);

		printf("Marks	:	");
		scanf("%f",&marks);
	}
  
	void printRecord( void )
	{
		printf("Name	:	%s\n",name);
		printf("Roll Number	:	%d\n",rollNumber);
		printf("Marks	:	%f\n",marks);
	}
};

int main( void )
{
	Student s1;	//Ok
	s1.acceptRecord( );
	s1.printRecord( );
	return 0;
}
