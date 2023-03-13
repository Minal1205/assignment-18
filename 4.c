#include <stdio.h>
//a function to transform string into uppercase
void uppercase(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    printf("uppercase string is %s", a);
}

int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    uppercase(c);

    return 0;
}

length(c);