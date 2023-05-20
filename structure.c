// Structure 
// It is a way to group together information belonging to different data types and combine them into one structure 
// Used when we wants to store data of different data types together 
// Structure element :
//                    struct struct_name{
//                                       structure_element;
//                                       }structure_variable;

// Accessing struct element
// Accessed by(.) operator known as "Structure member operator"
#include<stdio.h>

struct Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};

int main() {
    struct Books book1 ={"C programming", "Abc", 54.50, 180};
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%f\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;   
}
