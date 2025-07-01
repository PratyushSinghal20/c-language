#include<stdio.h>

int main () {

  for (int i =0; i< 15 ; i++) {
    if (i == 5) {
      continue ; // Skip the rest of the loop when i is 5
    }
   
    printf("the value of i is %d\n", i);
  }
  return 0;
}