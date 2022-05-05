// The printer Queue uses the queue concept to store the list of files they get to print in the printer. Write a program to print the  first file in the printer Queue. If the  no of print files is more than the print queue size, it should say “overflow” otherwise print the name of the first file.

// Input: 

// Queue size n , no of inputs m and input file names

// Output: names of the first file in the queue to be printed or overflow

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20
struct node
{
    char st[max];
    struct node *next;
} *f = NULL, *r = NULL;
typedef struct node queue;
void enqueue(char *st)
{
    queue *newnode = malloc(sizeof(queue));
    newnode->next = NULL;
    strcpy(newnode->st, st);
    if (r == NULL)
    {
        f = r = newnode;
    }
    else
    {
        r->next = newnode;
        r = newnode;
    }
}
int main()
{
    int t, n;
    scanf("%d", &t);
    scanf("%d", &n);
    int i = t;
    while (i--)
    {
        char st[max];
        scanf("%s", st);
        enqueue(st);
    }
    if (n > t)
        printf("Overflow\n");
    else
    {
        printf("%s", f->st);
    }
    return 0;
}
