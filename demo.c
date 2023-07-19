#include <stdio.h>
void sum(int *ptrA, int *ptrB)
{
    for (int i = *ptrA; i <= *ptrB; i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int a = 5, b = 15;
    sum(&a, &b);
    return 0;
}