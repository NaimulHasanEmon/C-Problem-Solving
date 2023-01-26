#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a[i], &b[i]);
        if ((a[i] / 1000 <= 0) || b[i] / 1000 <= 0)
        {
            printf("nao encaixa\n");
            continue;
        }
        int n[i], m[i];
        n[i] = a[i] % 10;
        m[i] = b[i] % 10;
        if (n[i] == m[i])
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    }
    return 0;
}