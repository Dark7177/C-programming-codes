#include<stdio.h>

int main() {
    int number,i;

    printf("Enter the value who table you want\n");
    scanf("%d", &number); 

    printf("The multiplication table of the required number %d is : \n", number);

    for(i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d\n",number , i , number*i);
    }
    
}