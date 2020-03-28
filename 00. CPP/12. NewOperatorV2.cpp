#include<cstdlib>
#include<iostream>
using namespace std;

int main( void  )
{
	int *ptr = new int[ 3 ];
	//int *ptr = (int*)::operator new[](sizeof( int ) * 3 );

	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;
	ptr[ 2 ] = 30;

	for( int index = 0; index < 3; ++ index )
		cout<<ptr[ index ]<<endl;

	delete[] ptr;
	//::operator delete[](ptr);

	ptr = NULL;
	return 0;
}
