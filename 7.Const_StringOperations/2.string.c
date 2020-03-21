#include <stdio.h>
#include <string.h>
#define SIZE 40
int main( void )
{
	//string
	char city1[]="pune";
	char city2[]={'p','u','n','e', '\0'};
	char city3[SIZE]={'p','u','n','e', '\0'};
	char city4[SIZE]="pune";
  
	// array of char
	char city5[]={'k','a','r','a','d'};

	printf("\n length of %s is %d", city1, strlen(city1));
	printf("\n size of %s is %d", city1, sizeof(city1));

	printf("\n length of %s is %d", city2, strlen(city2));
	printf("\n size of %s is %d", city2, sizeof(city2));

	printf("\n length of %s is %d", city3, strlen(city3));
	printf("\n size of %s is %d", city3, sizeof(city3));

	printf("\n length of %s is %d", city4, strlen(city4));
	printf("\n size of %s is %d", city4, sizeof(city4));


	printf("\n Enter City3:: ");
  
  // Uncommenting Below Code & Try One  By One
	//scanf("%s", city3); // scan upto space
	//gets(city3);// scan upto new line char \ns

	//scanf("%[^.]s",city3 ); // scan multiple line upto .
	//scanf("%[^\n]s",city3 ); // single line
	//scanf("%[A-Z]s", city3);//upto capital letters
	//scanf("%[^A-Z]s", city3);// upto small letters
	//scanf("%[a-z]s", city3);// upto small letters
	//scanf("%[0-9]s", city3);// upto digits

	printf("\n %s", city3);

	return 0;
}

