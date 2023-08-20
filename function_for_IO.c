#include<stdio.h>

int main() {
    FILE * ptr =NULL;
    char string[70]= "This content was produced by the string";

    // Reading a file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s" , string);
    // printf("The content of this file is %s", string);

    ptr= fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    return 0;
}