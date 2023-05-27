// ABC pvt ltd manages employee record of other companies
// Employees Id can be of any length and it can contain any characters
// For 3 employees ,we have to take 'length of employee id' as an input in a legnth integer variable .
// Then we have to take employee id as input and display it on screen.
// Store the employeee id in a character array which is allocated as dynamically
// We have to create only one charcter array dynamically

// Employeee 1:
// Enter no of character is your eId
// 45
// Dynamically Allocate the character Array
// Take input from user.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int len;
    char *ptr;
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the length of your employee id\n");
        scanf("%d", &len);
        ptr = (char *)calloc(len, sizeof(char));
        printf("Please Enter your employee id\n");
        scanf("%s", &(*ptr));
        if (strlen(ptr) == len)
        {
            printf("The employee id of employee is :");
            for (int i = 0; i < len; i++)
            {
                printf("%c", ptr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("Sorry no employee id found\n");
        }
    }

    return 0;
}