#include<stdio.h>
#include<string.h>

// strcat();
// Used to concatenate the source string to the end of the target string . 

// int main(){
//     char s[]="Hello";
//     char t[]="World";
//     strcat(s,t);
//     printf("string = %s", s);
//     return 0;
// }

// strlen();
// This function is used to count the number of characters present in a string

// int main(){
//     char s[]= "Hello" ;
//     int len=strlen(s);
//     printf("Length = %d", len);
//     return 0;
// }

// strcpy();
// This function is used to copy the content of one string into other. Expects two parameter . First base address of source string then the base address of the targeted string 
// int main() {
//     char s[]="Hello Their";
//     char t[50];
//     strcpy(t,s);
//     printf("Source string = %s\n", s);
//     printf("Targeted string = %s", t);
// }

// strcmp();
// Used to compare twi strings to find out whether they are same or different 
int main() {
    char s[]= "Hello";
    char t[]="World";
    int cmp=strcmp(s,t);
    printf("Comparison result = %d",cmp);
}