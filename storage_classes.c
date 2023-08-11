// Storage_classes in C Programming
// Declaration - Telling the compiler about the variable(No Space reserved)
// Defination - Declaration + space Reservation

// Auto Storage Class Code

// #include <stdio.h>
// #include <string.h>

// int myfunc(int a, int b)
// {
//     auto int sum;
//     sum = a + b;
//     return sum;
// }

// int main()
// {
//     int sum = myfunc(3, 5);
//     printf("The Sum is %d\n", sum);
//     return 0;
// }

// External Variable class

// #include<stdio.h>
// int sum =453;

// int myfunc(int a , int b){
//     extern int sum;
//     // sum = a+b ;
//     return sum;
// }

// int main () {
//     int sum = myfunc(10 , 5);
//     printf("The sum is %d\n", sum);
//     return 0;
// }

// Static Variable class

// #include<stdio.h>

// int myfunc(int a , int b){
//     static int myVar;
//     printf("The value of myVar is %d\n", myVar);
//     myVar++;
//     return myVar;
// }

// int main () {
//     int myVar = myfunc(10,5);
//     myVar = myfunc(10,5);
//     myVar = myfunc(10,5);
//     myVar = myfunc(10,5);
//     return 0;
// }

// Register Storage Class
#include <stdio.h>
int myfunc(int a, int b)
{
    static int myVar = 0;
    myVar++;
    printf("The value of myVar is %d\n", myVar);
    return myVar;
}

int main()
{
    register int myVar = myfunc(10, 7);
    myVar = myfunc(10, 7);
    myVar = myfunc(10, 7);
    myVar = myfunc(10, 7);
    return 0;
}