#include <stdio.h>
#include<stdlib.h>
//int main(void)
//int main(int argc, char *argv[])
//int main(int argc, char* argv[], char *envp[])
int main(int argc, char** argv, char *envp[])
{
	int no1, no2, ans;
	char op;

	if( argc!=4)
	{
		printf("\n Enter Valid Argruments \n");
		printf("\n ProgName No1 Operator No2 :: ");
	}
	else
	{
		no1= atoi(argv[1]);
		op= argv[2][0];
		//op= *argv[2];  op= *(400) == '+'
		no2= atoi(argv[3]);

		switch(op)
		{
		case '+' : ans= no1+no2;break;
		case '-' : ans= no1-no2;break;
		case '*' : ans= no1*no2;break;
		case '/' : ans= no1/no2;break;
		}
		printf("\n %d %c %d =%d", no1, op, no2, ans);
	}

	return 0;
}
