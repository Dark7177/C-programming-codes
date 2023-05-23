#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int inside = 0; // Variable to track wheather we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            inside = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            inside = 0;
            continue;
        }
        if (inside == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // Remove trailing space : )
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = " <h1>      This is a Heading     </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);

    return 0;
}