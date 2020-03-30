#include<iostream>
#include<string>
using namespace std;
int main( void )
{
	try
	{
		throw string("exception");
		try
		{
			//throw string("exception");
		}
		catch(string &ex)
		{
			cout<<"Nested try-catch"<<endl;
		}
	}
	catch(int &ex)
	{
		cout<<"Outer try-catch"<<endl;
	}
	catch(...)
	{
		cout<<"Generic catch"<<endl;
	}
	return 0;
}
