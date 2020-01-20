#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{

	{
		int no1, no2;
		printf("\n Enter No1  no2 ::");
		scanf("%d%d" , &no1, &no2);
	}
  
  int no1;
	char ch;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter Char :: ");
	getchar();
  //First Try With Below Line
	scanf("%c", &ch);
  
  //Then Try With Below Line
  //scanf("%*c%c", &ch); // %*c will ingore char \n

  
  return 0;
}
