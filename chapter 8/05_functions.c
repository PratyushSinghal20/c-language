#include<stdio.h>
#include<string.h>

int main() {

  char st[] = "harry";
  char a1[56] = "harry";
  char a2[56] = "bhai";

  printf("%d" , strlen(st)); // This will print the length of the string
  printf("\n");

  char target[30];
  strcpy(target, st); // This will copy the string st into target

  printf("%s %s\n", target, st); // This will print the copied string

  strcat(a1, a2); // This will concatenate a2 to a1
  printf("%s\n", a1); // This will print the concatenated string
  

  strcmp(a1, a2); // This will compare a1 and a2
  if (strcmp(a1, a2) == 0) {
    printf("a1 and a2 are equal\n");
  } else {
    printf("a1 and a2 are not equal\n");
  }
  return 0;

}