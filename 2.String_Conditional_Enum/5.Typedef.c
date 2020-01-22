#include<stdio.h>

//Way - 1
/*typedef enum color
{
	RED, BLACK, GREEN=5, YELLOW
}COLOR;
*/

//Way - 2
enum color
{
	RED, BLACK, GREEN=5, YELLOW
};
typedef enum color COLOR;


int main(void)
{
	// enum color is user defined data type , c variable of enum color
	COLOR c;//enum color c;
	int no;

	printf("\n sizeof c=%d", sizeof(c));
	printf("\n sizeof enum color=%d", sizeof(enum color));

	printf("\n 0. Red 1. Black 5. Green 6. Yellow :: ");
	printf("\n Enter your choice :: ");
	//scanf("%d", &c); // way 1 scan enum variable c

	scanf("%d", &no);
	//c= (enum color )no; // way 2 scan int typecast with enum

	// way 3 // scan int and assign value using switch case
	switch(no)
	{
		default: printf("\n invalid color ::");
				exit(0);// return 0; /// break;
		case 0: c= RED;break;
		case 1: c= BLACK; break;
		case 5: c= GREEN;break;
		case 6: c= YELLOW;break;
	}

	// display data using enum
	switch(c)
	{
		case RED: printf("\n red color "); break;
		case BLACK: printf("\n black color "); break;
		case GREEN: printf("\n green color "); break;
		case YELLOW: printf("\n Yellow color "); break;
		default: printf("\n invalid color");

	}

	return 0;
}



