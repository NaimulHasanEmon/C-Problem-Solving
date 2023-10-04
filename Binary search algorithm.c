#include <stdio.h>
int main()
{
    int ch[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, j, temp;
    printf("The array is: {");
    for (i = 0; i < 10; i++)
    {
        printf("%d", ch[i]);
        if (i < 9)
        {
            printf(", ");
        }
    }
    printf("}\n");
    int high_index = 9, low_index = 0, mid_index, n;
    printf("Enter the number you want to search: ");
    scanf("%d", &n);
    while (low_index <= high_index)
    {
        mid_index = (high_index + low_index) / 2;
        if (ch[mid_index] == n)
        {
            break;
        }
        else if (ch[mid_index] > n)
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }
    if (low_index > high_index)
    {
        printf("%d is not in the array elements.\n", n);
    }
    else
    {
        if (mid_index == 0)
        {
            printf("%d is the %dst element of the sorted array.\n", ch[mid_index], mid_index + 1);
        }
        else if (mid_index == 1)
        {
            printf("%d is the %dnd element of the sorted array.\n", ch[mid_index], mid_index + 1);
        }
        else if (mid_index == 3)
        {
            printf("%d is the %drd element of the sorted array.\n", ch[mid_index], mid_index + 1);
        }
        else
        {
            printf("%d is the %dth element of the sorted array.\n", ch[mid_index], mid_index + 1);
        }
    }
    return 0;
}
