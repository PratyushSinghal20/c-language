#include<stdio.h>
#include<string.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
}; 


void show(struct employee e);

void show (struct employee e) {


  printf("code is %d\n salary is %f\n name is %s\n", e.code , e.salary , e.name);

}

int main() {


  struct employee e1;
  e1.code = 4511;
  strcpy(e1.name, "Harry");
  e1.salary = 54.44;
  
  show(e1); // Passing structure to function
  
  return 0;

}