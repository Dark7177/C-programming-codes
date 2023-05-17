#include <stdio.h>

void swapx(int a, int b);

int main()
{
    int x = 10, y = 20;
    swapx(x, y);

    printf("%d and %d\n", x, y);
    return 0;
}

void swapx(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    printf("a=%d and b=%d\n", a ,b);
}