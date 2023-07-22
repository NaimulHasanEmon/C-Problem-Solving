#include <stdio.h>
typedef struct Vector
{
    int x, y;
} ve;
void calSum(ve v1, ve v2, ve sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of x: %d\n", sum.x);
    printf("Sum of y: %d\n", sum.y);
}
int main()
{
    ve v1 = {3, 7};
    ve v2 = {2, 2};
    ve sum = {0};
    calSum(v1, v2, sum);
    return 0;
}
