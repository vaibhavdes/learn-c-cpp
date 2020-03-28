#include<iostream>
using namespace std;

#include"../include/Complex.h"
using namespace ncomplex;

Complex::Complex( int real, int imag  ) : real( real ), imag( imag )
{	}
void Complex::acceptRecord( void )
{
	cout<<"Real Number	:	";
	cin>>real;
	cout<<"Imag Number	:	";
	cin>>imag;
}
void Complex::printRecord(  void  )
{
	cout<<"Real Number	:	"<<this->real<<endl;
	cout<<"Imag Number	:	"<<this->imag<<endl;
}
