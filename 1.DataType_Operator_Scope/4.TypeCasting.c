#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{

  	int no1=10, no2=3;
		float ans=0, ans1=0;
		ans= (float)no1/no2;  // type casting
		ans1= no1/3.0;
		printf("\nans=%.2f", (float)no1/no2);
		printf("\nans=%.2f", ans);
		printf("\nans1=%.2f", ans1);
		printf("\nans=%.0f", ans);
		printf("\nans=%d", no1/no2);
    
    
    {
      short int no1=300, no2=300, ans=0;
      ans=no1*no2;
      printf("\n %d * %d=%d", no1, no2, ans);
    }
    
  	exit(0); //return 0;
}
