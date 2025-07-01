#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!   hey comes in same line

    printf("%s", st);
    // puts(st);    hey comes in the next line
    printf("hey");

    return 0;
}