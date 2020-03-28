#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	//const Complex &other = c1
	//Complex *const this = &c2
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	//const Complex &other = c1
	//Complex *const this = &c2;
	Complex& operator=( const Complex &other )
	{
		cout<<"void operator=( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	void print( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};

int main( void )
{
	Complex c1( 10, 20 );
	Complex c2;
	Complex c3;
	c3 = c2 = c1;	//c2.operator=(c1)
	c3.print();
	return 0;
}
