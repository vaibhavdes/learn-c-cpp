#include <stdio.h>
// Uncomment Below Lines and Try various ways of main declaration
//int main(void)
//int main(int argc, char *argv[])
int main(int argc, char* argv[], char *envp[])
{
	int i;
	for(i=0;i<argc; i++)
	{
		printf("\n %d] %s", i, argv[i]);
	}
	return 0;
}
