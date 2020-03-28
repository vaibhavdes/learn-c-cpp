#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	void initComplex( )
	{
		real = 0;
		imag = 0;
	}
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>real;
		cout<<"Imag Number	:	";
		cin>>imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<real<<endl;
		cout<<"Imag Number	:	"<<imag<<endl;
	}
};

// Check Size of Class without Members (Method does not need any memory & Static Members size is not considered into class size)
class Test
{

};

int main( void )
{
	Test t;
	cout<<"Size	:	"<<sizeof( t )<<endl;
	return 0;
}

int main1( void  )
{
	Complex c1;
	c1.acceptRecord();
	c1.printRecord();
	return 0;
}
