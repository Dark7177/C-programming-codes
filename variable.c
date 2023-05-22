#include<stdio.h>

int b=34;

int func1(int b1) {
    printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1*10;
}

int main() {
    int b =344;
    // printf("The address of b inside main is %d\n", &b);
    int val= func1(b);
    int *ptra= &val;
    printf("The value of func1 is %d\n", val);

    return 0;
}