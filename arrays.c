#include<stdio.h>

int main() {
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("The Enter the value of %d element of array\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i , marks[i]);
    }

    // 2D array
    int mark[2][4] ={{4,2,3,5},{3,2,3,4}};
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            printf("The value of %d, %d element of array is %d\n", a,b,mark[a][b]);
        }
        
    }
    return 0;
}
