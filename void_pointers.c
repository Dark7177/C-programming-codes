#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 345;
    float b = 8.5;
    void *ptr;
    ptr = &a;
    printf("The valus of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}