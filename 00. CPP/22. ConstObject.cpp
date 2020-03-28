#include<iostream>
using namespace std;

class Test
{
private:
	int num1;
	int num2;
public:
	//Test *const this = &t
	Test( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	//Test *const this = &t
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	//const Test *const this = &t
	void printRecord( void )const
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};

int main( void )
{
	const Test t;
	//t.showRecord();	//Not Ok
	t.printRecord();
	return 0;
}
