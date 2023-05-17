#include<stdio.h>

int main() {
    int a;
    printf("Enter the value whose multiplication table you want\n");
    scanf("%d", &a);

    for(int i =1;i<=10;i++){
        printf("The value of %d * %d = %d\n", a ,i , a*i); 
    }

    return 0;
}