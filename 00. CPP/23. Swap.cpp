#include<iostream>
using namespace std;

//void swap_object( int * const a, int * const b )

void swap_object( int &a, int &b )
{
	int temp = a;	//int temp = *a;
	a = b;			//*a = *b;
	b = temp;		//*b = temp;
}

int main( void )
{
	int x = 10;
	int y = 20;
	swap_object( x, y );
	cout<<"X	:	"<<x<<endl;
	cout<<"Y	:	"<<y<<endl;
	return 0;
}
