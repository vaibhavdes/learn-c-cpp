#include<iostream>
using namespace std;

class Test
{
private:
	const int num1;
public:
	Test( void ) : num1( 10 )
	{
		//this->num1 = 10;
	}
	void showRecord( void )
	{
		//++ this->num1;
		cout<<"Num1	:	"<<this->num1<<endl;
	}
	void printRecord( void )
	{
		//++ this->num1;
		cout<<"Num1	:	"<<this->num1<<endl;
	}
};

int main( void )
{
	Test t;
	t.showRecord();
	t.printRecord();
	return 0;
}
