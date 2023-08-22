#include<stdio.h>
#include<stdlib.h>

int Sum(int a , int b){
    return a+b;
}

void greet (){
    printf("Hellow world good morniung %d\n");
}

int main () {
    printf("The sum of 1 and 2 is %d\n", Sum(1,2)); //Testing the function 
    int (*fFun) (int, int);//Declaring the function pointer
    fFun = &Sum; //Creting a function pointer
    int d = (*fFun)(10,15);//Dereferencing a function pointer
    printf("The value of d is %d\n", d);

    return 0;
}