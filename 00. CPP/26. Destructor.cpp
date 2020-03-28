#include<iostream>
using namespace std;

class Array
{
private:
	int size;
	int *arr;
public:
	Array( void )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )
	{
		this->size = size;
		this->arr = new int[ this->size ];
	}
	Array( const Array &other )
	{
		this->size = other.size;
		this->arr = new int[ this->size ];
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
	}
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	int& operator[]( int index )
	{
		if( index >= 0  && index < size )
			return this->arr[ index ];
		throw "Array Index Out Of Bounds Exception";
	}
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};

int main( void )
{
	Array a1( 3 );
	a1.acceptRecord();
	Array a2 = a1;
	a2.printRecord();
	return 0;
}
