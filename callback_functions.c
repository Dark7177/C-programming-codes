#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int(*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 1 and 7 is %d\n", fptr(1, 7));
}

void greetGmAndExecute (int(*fptr)(int, int)) {
    printf("Good morning user\n");
    printf("The sum of 1 an 7 is %d\n", fptr(1,7));
}

int main()
{
    int (*ptr)(int , int);
    ptr =sum;
    greetHelloAndExecute(ptr);

    return 0;
}