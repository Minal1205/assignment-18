#include <stdio.h>
// Write a function to check whether a given string is an alphanumeric string or not.

void check(char a[])
{
    int d = 0, b = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            d = 1;
        }
        if (a[i] >= '0' && a[i] <= '9')
        {
            b = 1;
        }
    }

    if (d == 1 && b == 1)
    {
        printf("String is alphanumeric\n");
    }
    else
        printf("String is not alphanumeric\n");
}
int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    check(c);

    return 0;
}