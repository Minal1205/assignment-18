#include <stdio.h>
//a function to calculate length of the string
void length(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of string is %d", count);
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    length(c);
    return 0;
}