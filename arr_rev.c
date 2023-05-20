#include <stdio.h>
int array_rev(int arr[])
{
    for (int i = 4; i >=0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int array_print(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("Array in order:\n");
    array_print(arr);
    printf("Array Reversed:\n");
    array_rev(arr);
    return 0;
}