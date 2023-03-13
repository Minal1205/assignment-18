#include <stdio.h>
#include <string.h>
// a function to reverse a string word wise.
void reversewords(char *s, int start, int end)
{
    int i, j;
    for (i = start, j = end; i <= j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    int i, j, flag = 0;

    char c[100];
    printf("Enter String\n");
    gets(c);
    

    for (i = 0, j = 0; c[j] != '\0';)
    {
        while (c[j] != ' ')
        {
            if (c[j] == '\0')
            {
                flag = 1;
                break;
            }
            j++;
        }

            reversewords(c, i, j - 1);
            i = j + 1;
            if (flag == 0)
            {
                j++;
            }
        
    }
    reversewords(c, 0, j - 1);
    printf("%s", c);

    return 0;
}
