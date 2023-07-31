#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 1, 4, 3};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}