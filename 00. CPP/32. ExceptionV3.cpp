#include<iostream>
using namespace std;

class ArgumentException
{
private:
	string message;
public:
	ArgumentException( const string message = "Argument Exception" ) : message( message )
	{	}
	string getMessage( void )const
	{
		return message;
	}
};

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void  )throw( )
	{
		this->real = 0;
		this->imag = 0;
	}
  
	int getReal( void )const throw( )
	{
		return this->real;
	}
  
	void setReal( const int real )throw( ArgumentException )
	{
		if( real >=0 )
			this->real = real;
		else
			th
      row ArgumentException("Invalid real number ");
	}
  
	int getImag( void )const throw( )
	{
		return this->imag;
	}
  
	void setImag( const int imag )throw( ArgumentException )
	{
		if( imag >= 0 )
			this->imag = imag;
		else
			throw ArgumentException("Invalid imag number");
	}
};

int main( void )
{
	try
	{
		Complex c1;
		c1.setReal( 10 );
		c1.setImag( 20 );

		int real = c1.getReal( );
		cout<<"Real Number	:	"<<real<<endl;

		int imag = c1.getImag( );
		cout<<"Imag Number	:	"<<imag<<endl;
	}
	catch( ArgumentException &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}
