#include<iostream>
using namespace std;

// To Different between Pass Argument Members and Class own Members We use this ie. ->  
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>real;
		cout<<"Imag Number	:	";
		cin>>imag;
	}
	void printRecord(  void  )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};

int main( void  )
{
	Complex c1(100,200);
	c1.printRecord();
	return 0;
}
