// Give an input Infix Expression, write the program to convert the given infix expression to postfix expression using Stack Operations.

// Input : Infix Expression

// Output : Postfix Expression

#include <stdio.h>
#include <string.h>
#define max 50
char stack[max];
int top = -1;
int priority(char ch)
{
    int x;
    switch (ch)
    {
    case '(':
        x = 0;
        break;
    case '+':
    case '-':
        x = 1;
        break;
    case '*':
    case '/':
        x = 2;
        break;
    }
    return x;
}
void push(char ch)
{
    top++;
    stack[top] = ch;
}
void pop()
{
    top--;
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char st[max];
    scanf("%s", st);
    for (int i = 0; i < strlen(st); i++)
    {

        if (st[i] >= 'a' && st[i] <= 'z')
        {
            printf("%c", st[i]);
        }
        else if (st[i] == '(')
        {
            push(st[i]);
        }
        else if (st[i] == ')')
        {
            while (stack[top] != '(')
            {
                printf("%c", stack[top]);
                pop();
            }
            pop();
        }
        else
        {
            while (priority(st[i]) <= priority(stack[top]) && top != -1)
            {
                printf("%c", stack[top]);
                pop();
            }
            push(st[i]);
        }
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
        pop();
    }
    return 0;
}
