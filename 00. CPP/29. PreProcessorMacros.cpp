#include<iostream>
#include<string>
using namespace std;
int main( void )
{
	//char txt[ 8 ] = "ABC";	//Ok

	//char txt[  ] = "ABC";	//Ok

	//char *txt = "ABC";	//Ok

	//const char *txt = "ABC";	//Ok

	//string str = "ABC";

	//cout<<sizeof( string )<<endl;

	/*
    cout<<__LINE__<<endl;

    cout<<__FUNCTION__<<endl;

    cout<<__FILE__<<endl;

    cout<<__DATE__<<endl;

    cout<<__TIME__<<endl;
  */


	string txt;
	cout<<"txt	:	";
	cin>>txt;
	name = txt + " " + "XYZ";
	cout<<"txt	:	"<<txt<<endl;
	return 0;
}
