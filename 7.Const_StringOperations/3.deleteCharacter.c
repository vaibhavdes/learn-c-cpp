#include <stdio.h>
#define SIZE 40
int main( void )
{
	char src[SIZE], delete;

	int i, j;

	printf("\n Enter String :: ");
	gets(src);                                    //scanf("%s", src);
	printf("\n Enter char to delete ::");
	scanf("%c", &delete);


	i=0;
	while(src[i]!='\0')
	{
		if(src[i]==delete)
		{
			j=i;
			while(src[j]!='\0')
			{
				src[j]=src[j+1];
				j++;
			}
			i--; // to delete con char
		}
    // Uncomment Below Line to See Step By Step Deletion
		// printf("\n %s after deleting %c ", src, delete);
		i++;

	}

	printf("\n %s after deleting %c ", src, delete);


	return 0;
}
