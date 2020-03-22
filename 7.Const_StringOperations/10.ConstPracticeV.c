
#include <stdio.h>
  int main()
  {
    int b=10, c=100;
    int * const p = &b;
    //cannot address pointer.modify stored in the pointer
    printf("\n b=%d *p=%d", b, *p);
    *p = 5;

    printf("\n b=%d *p=%d", b, *p);
    ++*p;   //++(*p). //allowed
    printf("\n b=%d *p=%d", b, *p);

    (*p)++; //allowed
    printf("\n b=%d *p=%d", b, *p);

    //p=&c;  // not allowed
    //p++;    //error
    //*p++;     // *(p++)

    return 0 ;
  }

