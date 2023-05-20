// Typedef in C
// Typedef is a keyword that is used to assign alternative names to existing datatypes.We use typedef with user defined datatypes.

// Syntax: typedef <previous_name> <alias_name>
#include<stdio.h>

int main() {
    typedef unsigned long ul;
    ul l1=10,l2=12,l3=13;
    printf("%u\n",l1);
    printf("%u\n",l2);
    printf("%u\n",l3);
    return 0;
}