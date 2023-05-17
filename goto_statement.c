#include<stdio.h>

int main() {
    label:
    printf("We are inside label\n");
    printf("Hello World\n");

    goto end;

    end:
    printf("We are at end");
    
    return 0;
}