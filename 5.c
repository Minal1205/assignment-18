#include <stdio.h>
// a function to transform string into lowercase
void lowercase(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("Lowercase string is %s", a);
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    lowercase(c);

    return 0;
}

length(c);