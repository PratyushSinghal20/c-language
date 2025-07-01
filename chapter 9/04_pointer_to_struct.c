#include<stdio.h>


struct employee
{

  int code;
  float salary;
  char name[10];
};

int main() {

  struct employee e1;
  e1.code = 56;
  struct employee *ptr;
  ptr = &e1; // ptr now points to e1

  printf("The code of e1 is %d\n", ptr->code); // Accessing member using pointer
  printf("%d\n", (*ptr).code); // Accessing member using dereferencing

  return 0; 
}