#include<stdio.h>

int main()  {
 int i = 2;
 int *ptr1 = &i;
 int **ptr2 = &ptr1;
 printf ("the adress of i is %u", &i);
 printf ("the adress of i is %d", *ptr1);
  printf ("the adress of ptr1 is %u", **ptr2);

     return 0;
}
