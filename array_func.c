#include <stdio.h>

// We can pass array to function in the following ways
// By declaring array as a parameter in the function
// By declaring a pointer in the function to hold the base address of the array

// By declaring array as a parameter in the function

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 5;
    // If we change the value of array in this function then the value of array also gets changed
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[][2] = {{1, 2}, {3, 4}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    func3(arr);
    return 0;
}