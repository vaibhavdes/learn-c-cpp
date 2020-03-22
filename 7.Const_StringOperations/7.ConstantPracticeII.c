#include <stdio.h>
int main()
{

  // Uncomment Each Block One By One & Try
  
	// 1. const variable
	{
		const float pi=3.142;
	  //  pi=3.14; // error as pi is const
    //  *pi=23.56; // error as pi is const
	  //  pi++;		//error pi constant
	  //	++pi;
		//  pi--;
		//  --pi;
		printf("\n pi=%f ",pi);
	}


	/*
    {
      const float pi=3.142;
      float *ptr=NULL;
      ptr=&pi;

      printf("\n pi=%f *ptr=%f",pi,*ptr);

      *ptr=2.14;	//we can modify through pointer
      printf("\n pi=%f *ptr=%f",pi,*ptr);
    }
  */

	/*
    {
      const float pi=3.142;
      const float *ptr=NULL;
      // ptr is not constant
      //value at ptr is constant

      ptr=&pi;
      float pj=111.55;

      ptr=&pj;//but ptr is not constant

      printf("\n pi=%f *ptr=%f",pi,*ptr);

      //*ptr=2.14;	//value at ptr is constant
      //printf("\n pi=%f *ptr=%f",pi,*ptr);
    }
   */

	{
		const float pi=3.142;
		const float * const ptr=&pi;
    
		//  value at ptr is constant
		//  as well  ptr is also constant

		//  ptr=&pi; // error as ptr is constant

		float pj=11.0f;

		//  ptr=&pj;	// error ptr is constant

		printf("\n pi=%f *ptr=%f",pi,*ptr);

	  //	*ptr=2.14;	//error value at ptr is constant

		printf("\n pi=%f *pi=%f",pi,*ptr);
	}

	return 0;
}
