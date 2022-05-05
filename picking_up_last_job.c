// Computer handles multiuser, multiprogramming environment and time-sharing environment. In this environment a system (computer) handles several jobs at a time; to handle these jobs the concept of a queue is used. Write a program to pick up the last job in the queue of a multi-tasking environment.

// Input: queue size n and list of jobs

// Output: name of the last job

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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char st[max];
        scanf("%s", st);
        enqueue(st);
    }
    printf("%s", r->st);
    return 0;
}
