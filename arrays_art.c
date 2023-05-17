#include<stdio.h>

int main() {
    int arr[]={311,52,3,4,5,67};
    int*ptrarray=arr;
    printf("The value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The value of the first element of array is %d\n", *(arr));

    return 0;
}