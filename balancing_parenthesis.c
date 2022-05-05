// To evaluate the expression, the parenthesis need to be balanced which means all open parenthesis should have a closed parenthesis. Write a program using stack data structure to check whether the given parenthesis string is balanced or not.

// Input: String with parenthesis

// Output: String is “Balanced” or “Not Balanced”


#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int flag = 0;
    scanf("%s", st);
    if ((strlen(st)) % 2 == 0)
    {
        for (int j = 0, i = strlen(st) - 1; j < strlen(st); j++, i--)
        {
            if (st[j] == st[i])
            {
                flag = 1;
            }
            break;
        }
        if (flag == 1)
        {
            printf("Not Balanced");
        }
        else
        {
            printf("Balanced");
        }
    }
    else
    {
        printf("Not Balanced");
    }
    return 0;
}
