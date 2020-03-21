#include <stdio.h>
int main( void )
{
  // Each Block below has separate scope
	{
    const int no=5;
    int *ptr=&no;

    printf("\n *ptr=%d no=%d", *ptr, no);
    *ptr=100;
    printf("\n *ptr=%d, no=%d", *ptr, no);
	}

  {
    const int no=5;
    int *ptr=&no;

    // Try Uncommenting Below One By One And Try
    //no++;
    //++no;
    ///--no;
    //no--;
    //no=10;

    printf("\n *ptr=%d no=%d", *ptr, no);
  }
  
	{
		const int arr[]={11,22,33};
		int *ptr=&arr[1];
    
    // Try Uncommenting Below And Try
		//arr[1]=100;

		printf("\n arr[1]=%d", arr[1]);
		*ptr=99;
		printf("\n arr[1]=%d", arr[1]);

	}


	return 0;
}

