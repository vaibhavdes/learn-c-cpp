#include<stdio.h>
#include<limits.h>
int main(void)
{

	

		printf("using limits.h  header file\n");
		printf("\n data type sizeof data types  formatsp  lower limit upper limit\n");
		printf("\n int\t\t  %-12d %%d\t %-12d to %-12d\n",sizeof(int), INT_MIN, INT_MAX);
		printf("\n unsigned char\t  %-12d %%c\t 0 to %-12d\n",sizeof(unsigned char), UCHAR_MAX);
		printf("\n signed char\t  %-12d %%c\t %d to %-12d\n",sizeof(char),SCHAR_MIN, SCHAR_MAX);
		printf("\n short int \t  %-12hd %%hd\t %d to %-12d\n",sizeof(short int),SHRT_MIN, SHRT_MAX);
		printf("\n unsigned short int \t  %-12u %%u\t 0  to %-12u\n",sizeof(unsigned short int), USHRT_MAX);

	return 0;
}

