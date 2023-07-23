#include <stdio.h>
void sum(int *ptr, int sum, int n)
{
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }
    printf("%d\n", sum);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    sum(&arr[0], 0, sizeof(arr) / sizeof(int));
    return 0;
}
