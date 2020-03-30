#include<iostream>
#include<string>
using namespace std;

class ArithmeticException
{
private:
	string message;
	string functionName;
	string fileName;
	int lineNumber;
public:
	ArithmeticException( string message, string functionName, string fileName, int lineNumber ) : message( message ), functionName( functionName ), fileName( fileName ), lineNumber( lineNumber )
	{	}
	void printStackTrace( void )const
	{
		cout<<"Exception : "<<this->message<<endl;
		cout<<"In "<<this->functionName<<" in  "<<this->fileName<<" on "<<this->lineNumber<<endl;
	}
};

void accept_record( int &number )
{
	cout<<"Enter number	:	";
	cin>>number;
}

void print_record( const int &result )
{
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	int num1;
	accept_record( num1 );

	int num2;
	accept_record( num2 );

	try
	{
		if( num2 == 0 )
			//throw string("Divide by zero exception");
			throw ArithmeticException("Divide by zero exception", __FUNCTION__, __FILE__, __LINE__ );
		int result = num1 / num2;
		print_record( result );
	}
	catch( ArithmeticException &ex )
	{
		ex.printStackTrace();
	}
	catch(...)	//Generic Catch
	{
		cout<<"Generic Catch Block"<<endl;
	}
	return 0;
}
