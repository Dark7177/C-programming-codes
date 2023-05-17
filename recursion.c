#include<stdio.h>

int factorial(int number) {
if (number ==1 || number==0)
{
    return 1;
}
else{
    return(number*factorial(number-1));
}
}

int main() {
    int num;
    printf("Enter the number whose factorial you want");
    scanf("%d", &num);

    printf("The factorial of the required number is %d\n", factorial(num));

    return 0;
}