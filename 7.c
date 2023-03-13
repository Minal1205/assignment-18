#include <stdio.h>
#include <string.h>
// function to check whether a given string is palindrome or not.
void palindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;
    while (i <= j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    if (i > j)
    {
        printf("String is Palindrome\n");
    }
    else
    {
        printf("String is not Palindrome\n");
    }
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    palindrome(c);
    return 0;
}