#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("You have entered your age as:%d\n", age);
    if (age>=18)
    {
        printf("You are adult now\n");
    }
    else
    {
        printf("You are still a child\n");
    }
    

    return 0;
}