#include<stdio.h>
int main( void )
{
  // Uncomment Each Block One By One & Try
	/*
    {
      const int no=10;
      //no=11;
      //no++;
      //no--;
      //--no;
      //++no;
      int *ptr=&no;
      printf("\n *ptr=%d", *ptr);
      *ptr=100;
      printf("\n *ptr=%d", *ptr);
    }
  */
	/*
    {

      const int no=10;
      int no1=20;
      const int *ptr=&no;
      printf("\n *ptr=%d", *ptr);
      //*ptr=100;
      ptr=&no1;
      printf("\n *ptr=%d", *ptr);
    }
  */

	/*
    {
      int no=10;
      int no1=20;
      int * const  ptr=&no;
      printf("\n *ptr=%d", *ptr);
      *ptr=1000;
      ptr=&no;


      printf("\n *ptr=%d", *ptr);

    }
  */
  
  
    {
      int no=10;
      int no1=20;
      const int * const  ptr=&no;
      printf("\n *ptr=%d", *ptr);
      // *ptr=1000;
      // ptr=&no;
      printf("\n *ptr=%d", *ptr);
    }
  

	return 0;
}
