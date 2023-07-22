#include <stdio.h>
int main()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("GCD = %d\n", b);
    return 0;
}