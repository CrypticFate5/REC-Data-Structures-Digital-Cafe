// Give an input Postfix Expression, write the program to evaluate the given postfix expression using Stack Operations.

// Input : Postfix Expression and List of values of the variables

// Output : Result of the expression

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 50
int stack[max];
int top = -1;
void push(int x)
{
    top++;
    stack[top] = x;
}
void operation(char ch)
{
}
int pop()
{
    int x = stack[top];
    top--;
    return x;
}
int main()
{
    char st[max];
    scanf("%s", st);
    int x, c;
    for (int i = 0; i < strlen(st); i++)
    {
        if (isalpha(st[i]))
        {
            scanf("%d", &x);
            push(x);
        }
        else
        {
            int a = pop();
            int b = pop();
            switch (st[i])
            {
            case '+':
                c = a + b;
                push(c);
                break;
            case '-':
                c = b - a;
                push(c);
                break;
            case '*':
                c = a * b;
                push(c);
                break;
            case '/':
                c = b / a;
                push(c);
                break;
            }
        }
    }
    printf("%d", stack[top]);
    return 0;
}
