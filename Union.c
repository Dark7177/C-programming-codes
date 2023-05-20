// Union in c
// The diff between the union and structure lies in the fact that in structure each member has its own stroage location whereas members of a union uses a single shared memory location 

// Defining a union :
// Union Union_name{
//   Union element  
// }striucture_variable;

#include<stdio.h>
#include<string.h>

union Books{
    char title[40];
    char author[100];
    float price;
    int pages;
};

int main() {
    union Books book1;
    strcpy(book1.title, "C programming");
    printf("%s\n", book1.title);

    strcpy(book1.author, "ABC");
    printf("%s\n", book1.author);

    book1.price = 125.500;
    printf("%f\n", book1.price);

    book1.pages =180;
    printf("%d\n", book1.pages);
    
    return 0;
}