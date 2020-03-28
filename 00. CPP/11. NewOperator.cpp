#include<cstdlib>
#include<iostream>
using namespace std;

int main( void  )
{
	int *ptr = new int;
  
	//int *ptr = ( int* )::operator new( sizeof( int ) );

	*ptr = 125;
	cout<<"Value	:	"<<*ptr<<endl;

	delete ptr;
	//::operator delete(ptr);

	ptr = NULL;
	return 0;
}
