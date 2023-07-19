#include <stdio.h>
void sum(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}
int main()
{
    int num = 5;
    sum(num);
    printf("Number = %d\n", num);
    return 0;
}
