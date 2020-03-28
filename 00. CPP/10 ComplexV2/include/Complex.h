#ifndef COMPLEX_H_
#define COMPLEX_H_

namespace ncomplex
{
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( int real = 0, int imag = 0  );

		void acceptRecord( void );

		void printRecord(  void  );
	};
}

#endif /* COMPLEX_H_ */
