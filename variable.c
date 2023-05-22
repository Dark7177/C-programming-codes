#include<stdio.h>

int func1(int b) {
    printf("The address of b inside func1 is %d\n", &b);
    return b*10;
}

int main() {
    int b =344;
    printf("The address of b inside main is %d\n", &b);
    int val= func1(b);
    int *ptra= &val;
    printf("The value of func1 is %d\n", val);

    return 0;
}