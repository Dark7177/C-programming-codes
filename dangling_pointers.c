#include <stdio.h>
#include <stdlib.h>

int functionDangling() {
    int a , b , sum;
    a =32;
    b = 364;
    sum =a+b;
    return &sum;
}
int main()
{
    // Case 1 : De allocation of memory block 
    int *ptr = (int *)malloc(7*sizeof(int));
    ptr[0] = 34;
    ptr[1] = 38;
    ptr[2] = 43;
    ptr[3] = 30;
    free(ptr); //ptr is now a dangling pointer

    // Case 2 : Function retutning local variable address 
    int * dangPtr = functionDangling(); // ptr is now a dangling pointer 

    int * danglingPtr3;
    // Case 3 : If a variable goes out of scope 
    {
        int a = 20;
        danglingPtr3 = &a;
    }//Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer 

    return 0;
}