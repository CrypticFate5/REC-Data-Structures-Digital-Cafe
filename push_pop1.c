// Read size of a stack No and insert n elements into the stack. print stack print the top element of the stack

#include <stdio.h>
#define max 100
int stack[max];
int top = -1;
void push(int x)
{
    top++;
    stack[top] = x;
}
void peek()
{
    printf("%d\n", stack[top]);
}
void traverse()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int t;
        scanf("%d", &t);
        push(t);
    }
    traverse();
    peek();
    return 0;
}
