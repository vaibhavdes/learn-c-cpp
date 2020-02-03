#include <stdio.h>
int main( void )
{
	{
		int i=10;
		//int *pi=&i; //decl & init pointer
		// or
		int *pi=NULL; // decl pointer
		pi=&i; //assignment of address

		printf("\n i=%d *(&i)=%d *pi=%d", i, *(&i), *pi);
		printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);
		printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

		*pi=20; // setting value of variable using pointer

		printf("\n i=%d *(&i)=%d *pi=%d", i, *(&i), *pi);
		printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);

		printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

		printf("\n size of pointer pi =%d", sizeof(pi));
		printf("\n int pi=%u pi+1=%u", pi, pi+1);
		printf("\n int pi=%u pi-1=%u", pi, pi-1);
		printf("\n int pi=%u pi+5=%u", pi, pi+5);
		printf("\n int pi=%u pi-5=%u", pi, pi-5);
		printf("\n int pi=%u pi/5=%u", pi, pi/5);
		printf("\n int pi=%u pi*5=%u", pi, pi*5);
	}
	printf("\n=======================================================\n");
	{
			float i=5.34;
			//float *pi=&i; //decl & init pointer
			// or
			float *pi=NULL; // decl pointer
			pi=&i; //assignment of address

			printf("\n i=%f *(&i)=%f *pi=%f", i, *(&i), *pi);
			printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);
			printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

			*pi=110.22; // setting value of variable using pointer

			printf("\n i=%f *(&i)=%f *pi=%f", i, *(&i), *pi);
			printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);

			printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

			printf("\n size of pointer pi =%d", sizeof(pi));
			printf("\n float pi=%u pi+1=%u", pi, pi+1);
			printf("\n float pi=%u pi-1=%u", pi, pi-1);
			printf("\n float pi=%u pi+5=%u", pi, pi+5);
			printf("\n float pi=%u pi-5=%u", pi, pi-5);
		}
	printf("\n=======================================================\n");

	{
				char i='A';
				//char *pi=&i; //decl & init pointer
				// or
				char *pi=NULL; // decl pointer
				pi=&i; //assignment of address

				printf("\n i=%c *(&i)=%c *pi=%c", i, *(&i), *pi);
				printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);
				printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

				*pi='Z'; // setting value of variable using pointer

				printf("\n i=%c *(&i)=%c *pi=%c", i, *(&i), *pi);
				printf("\n &i=%u &pi=%u pi=%u", &i, &pi, pi);

				printf("\n &i=%p &pi=%p pi=%p", &i, &pi, pi);

				printf("\n size of pointer pi =%d", sizeof(pi));
				printf("\n char pi=%u pi+1=%u", pi, pi+1);
				printf("\n char pi=%u pi-1=%u", pi, pi-1);
				printf("\n char pi=%u pi+5=%u", pi, pi+5);
				printf("\n char pi=%u pi-5=%u", pi, pi-5);
			}
	printf("\n=======================================================\n");
	return 0;
}
