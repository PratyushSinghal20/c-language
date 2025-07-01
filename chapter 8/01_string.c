#include<stdio.h>

int main() {

  char st[] = {'a' ,'b' , 'c' , '\0'};

  for (int i = 0;  i < 3; i++) {

    printf("The value of st[%d] is %c\n", i, st[i]);
  }


}
