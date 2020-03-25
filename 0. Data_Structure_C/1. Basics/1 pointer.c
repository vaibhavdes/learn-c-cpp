#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=300;
	int y=200;
	int *ptr;                                       // Same as &x;  // To Hold Address  // Pointer
	ptr=&x;
	printf("\n ptr=%u  *ptr=%d",ptr,*ptr);
	ptr=&y;
	printf("\n ptr=%u  *ptr=%d",ptr,*ptr);

	char *cptr = &x;
	printf("\n *cptr= %d",*cptr);
	printf("\n *cptr= %d",*(int *)cptr);

	return EXIT_SUCCESS;
}
