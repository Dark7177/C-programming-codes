#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You are adult Now\n");
    }
    else if (age<18 && age >=13)
    {
        printf("You are teen now\n");
    }
    else 
    {
        printf("You are still a child\n");
    }
    return 0;
}