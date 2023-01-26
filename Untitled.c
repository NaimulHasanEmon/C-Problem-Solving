#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        int rem, count = 0, num, check;
        int n1, rem1, sum = 0, temp;
        check = i;
        n1 = i;
        while (1)
        {
            rem = i / 10;
            i = rem;
            count++;
            if (rem <= 0)
                break;
        }
        num = count;
        while (1)
        {
            rem1 = n1 % 10;
            temp = n1 / 10;
            n1 = temp;
            sum = sum + pow(rem1, num);
            if (temp <= 0)
                break;
        }
        if (check == sum)
            printf("%d\n",i);
    }
    return 0;
}