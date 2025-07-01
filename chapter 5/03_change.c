#include<stdio.h>

int change(int a);

int change(int a) {
    

a = 77;

return 0;
}

int main() {

    int a = 5;

    printf("Before change: %d\n", a);

    change(a);

    printf("After change: %d\n", a);

    return 0;
}
