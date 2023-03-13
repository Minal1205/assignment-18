#include <stdio.h>
#include <string.h>
// function to find the repeated character in a given string.
void repeat(char a[])
{
    char ch;
    int count = 0;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        count = 0;

        for (int j = 0; a[j] != '\0'; j++)
        {

            if (a[j] == ch)
            {
                count++;
            }
        }
        if (count > 1)
            printf("%c,", ch);
    }
}

int main()
{
    char c[100], ch;
    int count = 0;
    printf("Enter String\n");
    gets(c);
    printf("Repeated characters are ");
    repeat(c);

    return 0;
}
