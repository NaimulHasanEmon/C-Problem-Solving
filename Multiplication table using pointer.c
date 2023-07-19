#include <stdio.h>
void timeTable(int *ptr)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", *ptr, i, *ptr * i);
    }
}
int main()
{
    int a = 5;
    timeTable(&a);
    return 0;
}
