#include <stdio.h>

int assign(int *x, int *y)
{
    int h, s;
    h = *x;
    s = *y;
    *x = h + s;
    *y = h - s;
}

int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);

    assign(&a,&b);
    printf("The value of a is %d\n and b is %d\n", a,b);
    return 0;
}