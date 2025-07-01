#include<stdio.h>

int returning_5(int *ptr) {

  printf("the value of ptr is %d" , ptr);
  printf("the value of ptr is %d" , *ptr);
  return 5;

}

int main()  {
 int i = 2;
 int *ptr = &i;
 printf ("the adress of i is %u", &i);
 printf ("the adress of i is %d", *ptr);

     return 0;
}