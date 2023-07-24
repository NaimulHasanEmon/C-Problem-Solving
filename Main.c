#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *a = NULL, *b = NULL, *c = NULL;
    a = (struct Node *)calloc(1, sizeof(struct Node));
    b = (struct Node *)calloc(1, sizeof(struct Node));
    c = (struct Node *)calloc(1, sizeof(struct Node));
    a->data = 1;
    b->data = 2;
    c->data = 3;
    a->next = b;
    b->next = c;
    c->next = NULL;
    struct Node *curr = a;
    while (curr != NULL)
    {
        printf("%d", curr->data);
        curr = curr->next;
        if (curr != NULL)
        {
            printf(" -> ");
        }
    }
    free(a);
    free(b);
    free(c);
    return 0;
}