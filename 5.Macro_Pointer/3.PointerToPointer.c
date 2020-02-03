#include<stdio.h>
int main(void)
{
	int x=10;
	int *px= &x;
	int **ppx=&px;

	printf("\n size of x=%d", sizeof(x));
	printf("\n size of px=%d", sizeof(px));
	printf("\n size of ppx=%d", sizeof(ppx));

	printf("\n x=%d *(&x)=%d  *px=%d **ppx =%d ", x, *(&x) , *px , **ppx);
	printf("\n &x=%u &px =%u &ppx=%u px=%u ppx=%u ", &x, &px, &ppx, px, ppx);

	return 0;
}
