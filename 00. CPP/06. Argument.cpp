#include<iostream>
using namespace std;

// parameters signature (Default Parameters are 0 if not passed)
void sum( int num1, int num2, int num3 = 0, int num4 = 0, int num5 = 0 )
{
	int result = num1 + num2 + num3 + num4 + num5;
	cout<<"Result	:	"<<result<<endl;
}

int main( int argc = 0, char *argv[] = NULL )
{
  // Argument Pass
	sum( 10, 20 );
  
  // Uncomment and Try Below Code
	//sum( 10, 20, 30 );
	//sum( 10, 20, 30, 40);
	//sum( 10, 20, 30, 40, 50 );
	return 0;
}
