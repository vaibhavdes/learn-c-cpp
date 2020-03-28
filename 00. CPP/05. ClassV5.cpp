#include<iostream>
using namespace std;

class Student
{
private:
	char name[ 30 ];
	int rollNumber;
	float marks;
public:
	void acceptRecord( void )
	{
		//using namespace std;
		cout<<"Name	:	";
		cin>>name;

		cout<<"Roll Number	:	";
		cin>>rollNumber;

		cout<<"Marks	:	";
		cin>>marks;
	}
	void printRecord( void )
	{
		//using namespace std;
		cout<<"Name	:	"<<name<<endl;
		cout<<"Roll Number	:	"<<rollNumber<<endl;
		cout<<"Marks	:	"<<marks<<endl;
	}
};

int main( void )
{
	Student s1;	//Ok
	s1.acceptRecord( );
	s1.printRecord( );
	return 0;
}
