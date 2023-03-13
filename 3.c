#include <stdio.h>
// function to compare two strings.
void comp(char a[], char b[])
{
    int i = 0;
    while (a[i] == b[i] && a[i] != '\0')
        i++;
    if (a[i] > b[i])
        printf("str1 > str2");
    else if (a[i] < b[i])
        printf("str1 < str2");
    else
        printf("str1 = str2");
}

int main()
{
    char str1[30], str2[30];
    int i = 0;

    printf("\nEnter two strings\n");
    gets(str1);
    gets(str2);
    comp(str1, str2);

    return (0);
}