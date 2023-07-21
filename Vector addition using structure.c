#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void calSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("%d\n", sum.x);
    printf("%d\n", sum.y);
}
int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    calSum(v1, v2, sum);
    return 0;
}
