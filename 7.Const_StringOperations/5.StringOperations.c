#include <stdio.h>
#include <string.h>
#define SIZE 40

// Function Declaration
int MenuOperations();
size_t mystrlen(const char *s);                               // size_t mystrlen(char s[]);
char* mystrchr(const char *s, int key);
char* mystrcpy(char *d, const char *s);
char* mystrcat(char *d, const char *s);
int mystrcmp(const char *s1, const char *s2);

int main( void )
{
	char src[SIZE], dest[SIZE], find, *ptr=NULL;
	size_t ans;
	int ans1;
	int choice;

	do
	{
		choice= MenuOperations();
		if(choice>=1 &&choice<=2)
		{
			printf("\n Enter Src :: ");
			getchar();// scanf("%*c")
			gets(src);
		}
		else if(choice>=3 &&choice<=7)
		{
			printf("\n Enter Src :: ");
			getchar();// scanf("%*c");
			gets(src);
			printf("\n Enter dest :: ");
			gets(dest);
		}


		switch(choice)
		{
			default :
					printf("\n invalid case");
					break;
          
			case 0://	exit
					exit(0);
          
			case 1:// string length
					ans=mystrlen(src);
					printf("\n length of %s is %d", src, ans);
					break;

			case 2:// search char in string
					printf("\n Enter char to search :: ");
					scanf("%c", &find);
					ptr= mystrchr(src, find);
					if(ptr==NULL)
						printf("\n %c is not found in %s", find, src);
					else
						printf("\n %c is found at %d position", find, ptr-src);

					break;
          
			case 3:// string copy
					ptr=mystrcpy(dest, src);
					printf("\n  using return value =%s ", ptr);
					printf("\n  using dest as 1st parameter =%s", dest);

					break;
          
			case 4:// string concate
					ptr=mystrcat(dest, src);
					printf("\n  using return value =%s ", ptr);
					printf("\n  using dest as 1st parameter =%s", dest);

					break;
          
			case 5:// string compare
					ans1= mystrcmp(src, dest);
					if(ans1>0)
					{
						printf("\n %s is bigger than %s", src,dest);
					}
					else if(ans1<0)
					{
						printf("\n %s is smaller than %s", src,dest);
					}
					else
						printf("\n %s is same with %s", src, dest);
					break;
          
			case 6:// string compare by ingonre cases
					ans1= strcasecmp(src, dest);
					if(ans1>0)
					{
						printf("\n %s is bigger than %s", src,dest);
					}
					else if(ans1<0)
					{
						printf("\n %s is smaller than %s", src,dest);
					}
					else
						printf("\n %s is same with %s", src, dest);

					break;
          
			case 7: // find sub string in given string
					ptr= strstr(src, dest);
					if(ptr==NULL)
						printf("%s is not found in %s",dest ,src );
					else
						printf("%s is found in %s at %d position",dest ,src , ptr-src);
					break;
          
		}

		printf("\n Enter 1 to Continue 0 to Exit");
		scanf("%d", &choice);


	}while(choice!=0);
	return 0;
}

int MenuOperations()
{
	int choice;
	printf("\n 1. strlen \n 2. strchr \n 3. strcpy \n 4. strcat");
	printf("\n 5. strcmp \n 6. strcasecmp \n 7. strstr \n 0. Exit");

	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);

	return choice;
}

char* mystrchr(const char *s, int key)
{
	int i;
	i=0;
	while(*(s+i)!='\0')  // while(*s[i)!='\0')
	{
		if( *(s+i)==key)     //if( s[i]==key)
			return (s+i);      // return &s[i];
		i++;
	}
	return NULL;

}

size_t mystrlen(const char *s)
{
	int i;
	/*i=0;
	while(*(s+i)!='\0')   // while(s[i]!='\0')
	{
		i++;
	}
	return i; */

	/*for(i=0; s[i]!='\0'; i++);
	return i;*/

	//s[1]='U'; error as s is const
	for(i=0; *(s+i)!='\0'; i++)
	{}
	return i;
}

char* mystrcpy(char *d, const char *s)
{
	int i;
	i=0;
	while(*(s+i)!='\0')  //while(s[i]!='\0')
	{
		*(d+i)=*(s+i);   // d[i)=s[i]);
		i++;
	}
	*(d+i)='\0';
	return d;    //
}

char* mystrcat(char *d, const char *s)
{
	int i, j;
	for(i=0; *(d+i)!='\0'; i++); // go to end of dest

	for(j=0; *(s+j)!='\0'; j++) // go to end of src
	{
		*(d+i+j) =*(s+j);//d[i+j]= s[j];
	}
	 *(d+i+j)='\0';  //d[i+j]='\0';

	return d;
}

int mystrcmp(const char *s1, const char *s2)
{
	int i;
	for(i=0; *(s1+i)!='\0' || *(s2+i)!='\0'; i++ )
	{
		if( *(s1+i)!=*(s2+i))			//if( s1[i]!=s2[i])
			return *(s1+i) - *(s2+i);			//return s1[i] - s2[i];
	}
	return 0;

}
