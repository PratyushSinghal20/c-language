#include<stdio.h>

int main() {

  char st[] = {'a' ,'b' , 'c' , '\0'};

  for (int i = 0;  i < 3; i++) {

    printf("%c", st [i]);
  }


}

//note:-

//scanf(%s, st); // This will read a string from the user until a space is encountered
//printf("%s", st); // This will print the string stored in st