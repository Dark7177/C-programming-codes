// Storage_classes in C Programming
// Declaration - Telling the compiler about the variable(No Space reserved)
// Defination - Declaration + space Reservation

#include <stdio.h>
#include <string.h>

int myfunc(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int sum = myfunc(3, 5);
    printf("The Sum is %d\n", sum);
     return 0;
}