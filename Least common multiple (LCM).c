#include <stdio.h>
int main()
{
    printf("Enter two numbers: ");
    int a, b, m, n;
    scanf("%d%d", &a, &b);
    m = a, n = b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    int gcd = a;
    int lcm = (m * n) / gcd;
    printf("LCM = %d\n", lcm);
    return 0;
}
