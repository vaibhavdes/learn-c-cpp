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
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1;
	//Complex other = c2;
	Complex operator+( Complex other )
	{
		Complex temp;
		temp.real =  this->real + other.real;
		temp.imag =  this->imag + other.imag;
		return temp;
	}
	//Complex *const this = &c1;
	//Complex other = c2;
	Complex operator-( Complex other )
	{
		Complex temp;
		temp.real =  this->real - other.real;
		temp.imag =  this->imag - other.imag;
		return temp;
	}
	void print( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
	//friend Complex operator+( Complex c1, Complex c2 );
};

/*
  Complex operator+( Complex c1, Complex c2 )
  {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag +  c2.imag;
    return temp;
  }
*/

int main( void )
{
	Complex c1(10,20);
	Complex c2(30,40);
	Complex c3;
	//c3 = c1 + c2;	//c3 = c1.operator+( c2  )
	c3 = c1 - c2;	//c3 = c1.operator-( c2  )
	//c3 = c1 + c2;	//c3 = operator+( c1, c2 );
	c3.print();
	return 0;
}
