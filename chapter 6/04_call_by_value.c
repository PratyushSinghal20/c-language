#include<stdio.h>

int sum(int , int );

int sum (int a, int b)  {

 return a+b;

}

int main() {
  int x = 1 , y = 6;

  printf("The sum of %d and %d is %d\n", x, y, sum(x, y));
  return 0;
}