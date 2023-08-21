#include<stdio.h>

int main () {
    FILE *fil = NULL;
    fil = fopen("myfile.txt", "w");
    // char c = fgetc(fil);
    // printf("The character I read was %c\n", c);
    // c = fgetc(fil);
    // printf("The character I read was %c\n", c);

    // char str [34];
    // fgets(str , 5 , fil);
    // printf("The string is %s\n", str);

    fputc('o' , fil);
    fputs("This is fputs", fil);

    fclose(fil);
    return 0;
}