#include<stdio.h>

// Class is implemented over Structure (Only Diff is it has methods)
class Student
{
private:
	//Data member / Property / Attribute / Field
	char name[ 30 ];
	int rollNumber;
	float marks;
  
public:
	//Member Function / Method / Operation / Behavior / Message
	void accept_record( void )
	{
		printf("Name	:	");
		scanf("%s",name);

		printf("Roll Number	:	");
		scanf("%d", &rollNumber);

		printf("Marks	:	");
		scanf("%f",&marks);
	}
  
	void print_record( void )
	{
		printf("Name	:	%s\n",name);
		printf("Roll Number	:	%d\n",rollNumber);
		printf("Marks	:	%f\n",marks);
	}
  
};

int main( void )
{
	Student s1;	//Ok
	s1.accept_record(  );	//Message Passing
	s1.print_record(  );	//Message Passing
	return 0;
}
