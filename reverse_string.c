// ABC international is checking the company names of its client for palindrome. A string is said to be palindrome if both the input string and the reversed output string are one and the same. So ABC international needs to reverse the names of the companies they have. Write a program to reverse a string using stack implementation. Remember as stack uses LIFO concept the string pushed can be popped out in a reverse order.
// Constraint: String can be of size 10.
// Input: Input string S
// Output: Reverse of a string given as input or overflow if string is above size 10.
// Test Case 1:
// Input:
// madam
// Output
// madam
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
struct node
{
    char ch;
    struct node *next;
} *list = NULL;
typedef struct node stack;
int isEmpty()
{
    if (list == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char x)
{
    stack *newnode = malloc(sizeof(stack));
    newnode->ch = x;
    if (isEmpty())
    {
        newnode->next = NULL;
        list = newnode;
    }
    else
    {
        newnode->next = list;
        list = newnode;
    }
}
void traverse()
{
    stack *pos = list;
    while (pos != NULL)
    {
        printf("%c", pos->ch);
        pos = pos->next;
    }
}
int main()
{
    char st[max];
    scanf("%s", st);
    if (strlen(st) > 10)
    {
        printf("Overflow\n");
    }
    else
    {
        for (int i = 0; i < strlen(st); i++)
        {
            push(st[i]);
        }
        traverse();
    }
    return 0;
}
