#include<iostream>
using namespace std;

// The keyword mutable is mainly used to allow a particular data member of const object to be modified. 
class Test
{
private:
	int num1;
	mutable int num2;
public:
	//Test *const this = &t
	Test( void ) : num1( 0 ), num2( 0 )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	//Test *const this = &t
	void showRecord( void )
	{
		++ this->num1;
		++ this->num2;
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	//const Test *const this = &t
	void printRecord( void )const
	{
		//++ this->num1; 	//Not Ok
		++ this->num2;	//Ok
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};

int main( void )
{
	Test t;
	t.showRecord();
	t.printRecord();
	return 0;
}
