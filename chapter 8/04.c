#include<stdio.h>

int mystrlen(char str[])  {

  int i = 0 , count ;
  char c = str[i];
  while(c != '\0') {
    c = str[i];
    i++;
  }

  count = i -1;
  return count;


}

void mystrcpy(char target[] , char source[]) {

  for (int i = 0; i < mystrlen(source); i++) {
    target[i] = source[i];
  }
  target[mystrlen(source)] = '\0'; 
}

int main() {

  char souce[] = "harry";
  char target[56];
  mystrcpy(target, souce);  
  printf("%s\n", target); 
  return 0;
}