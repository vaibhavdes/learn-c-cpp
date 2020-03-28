#ifndef STUDENT_H_
#define STUDENT_H_

	class Student
	{
	private:
		char name[ 30 ];
		int rollNumber;
		float marks;
	public:
		void acceptRecord( void );

		void printRecord( void );
	};//end of class

#endif 
/* STUDENT_H_ */
