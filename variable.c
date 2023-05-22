#include<stdio.h>

int b=34;

int func1(int b1) {
    static int myvar=98;
    printf("The value of myvar is %d\n", &b);
    myvar++;

    return b1+myvar++;
}

int main() {
    int b=344;
    int val=func1(b);
    val= func1(b);
    int*ptra =&val;
    printf("Value of int *ptra %d\n", &b);
    return 0;
}