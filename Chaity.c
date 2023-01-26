#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int a[n][m], count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}