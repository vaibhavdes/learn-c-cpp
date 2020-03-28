#include<cstdlib>
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex( void )
	{
		cout<<"Inside ctor"<<endl;
	}
};

int main( void )
{
	//Complex *ptr = (Complex*)malloc( sizeof( Complex));
	Complex *ptr = new Complex;
	return 0;
}

