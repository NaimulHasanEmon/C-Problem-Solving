#include <stdio.h>
void swap(int *ptrA, int *ptrB)
{
    int *temp = ptrA;
    ptrA = ptrB;
    ptrB = temp;
    printf("After swapping a = %d, b = %d\n", *ptrA, *ptrB);
}
int main()
{
    int a = 4, b = 5;
    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(&a, &b);
    return 0;
}
