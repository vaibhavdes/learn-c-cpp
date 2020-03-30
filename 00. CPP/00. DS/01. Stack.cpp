#include<iostream>
#include<stack>
using namespace std;
int main( void )
{
	stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	int element = 0;
	while( !s1.empty())
	{
		element = s1.top();
		cout<<element<<endl;
		s1.pop();
	}
	return 0;
}
