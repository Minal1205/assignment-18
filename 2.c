#include <stdio.h>
#include <string.h>
// function to reverse a string.
void reverse(char a[])
{
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    reverse(c);
    return 0;
}