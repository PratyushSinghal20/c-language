#include<stdio.h>

int main()  {

  int i =5;
  printf("the value of i is %d\n", i++); // Post-increment: prints 5, then increments i to 6
  printf("the value of i is %d\n", ++i); // Pre-increment: increments i to 7, then prints 7
  printf("the value of i is %d\n", i--); // Post-decrement: prints 7, then decrements i to 6
  printf("the value of i is %d\n", --i); // Pre-decrement: decrements i to 5, then prints 5
  printf("the final value of i is %d\n", i); // Prints the final value of i, which is 5
  return 0;
} 