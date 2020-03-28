#include<iostream>
using namespace std;

void accept_record( int &number )
{
	cout<<"Enter number	:	";
	cin>>number;
}

int main( void )
{
	int num1;
	::accept_record(num1);

	int num2;
	::accept_record(num2);

	try
	{
		if( num2 == 0 )
			throw "Divide by zero exception";
		int result = num1 / num2;
		cout<<"Result	:	"<<result<<endl;
	}
	catch( const char *ex )
	{
		cout<<ex<<endl;
	}
	catch(...)	//Generic Catch Block
	{
		cout<<"Generic Catch Block"<<endl;
	}
  
	return 0;
}
