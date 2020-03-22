#include<stdio.h>
#pragma pack(1)

// Lets say a data type 'int' hold '4 bytes', but you are memory saver and you know int variable  will require just 2 bytes of storage
// and so we use BitField concept where after colon (:) we specify max bytes a variable must acquire in memory 
struct emp
{
	int empno;
	char name[10];
	float sal;
	signed comp:8;
	unsigned mobile:1;
	unsigned labtop:1;
};
struct date1
{
	int dd,mm, yy;
};
struct date2
{
	short int dd,mm, yy;
};
struct date3
{
	signed dd:6;
	signed mm:5;
	signed yy:12;
};
struct date4
{
	unsigned dd:5;
	unsigned mm:4;
	unsigned yy:11;
};

int main(void)
{
	printf("\n size of struct date1 =%d", sizeof(struct date1));
	printf("\n size of struct date2 =%d", sizeof(struct date2));
	printf("\n size of struct date3 =%d", sizeof(struct date3));
	printf("\n size of struct date4 =%d", sizeof(struct date4));
	return 0;
	int no;
	struct emp e={1, "abc", 12000, 1,0,1};

	printf("%d %s %f %d %d %d", e.empno, e.name, e.sal, e.comp, e.mobile,e.labtop);
	e.comp==1 ? printf("\n have a comp ") : printf("\n dont have comp ");
	printf("\n");
	printf("\n size of e=%d", sizeof(e));

	printf("\n Enter 1 to have a comp or 0 dont have comp :: \n");
	printf("\n enter your choice :: ");
	//scanf("%d", &e.comp); // error
	scanf("%d", &no);

	e.comp=no;
	printf("%d %s %f %d %d %d", e.empno, e.name, e.sal, e.comp, e.mobile,e.labtop);
	e.comp==1 ? printf("\n have a comp ") : printf("\n dont have comp ");
	printf("\n");


	return 0;
}
