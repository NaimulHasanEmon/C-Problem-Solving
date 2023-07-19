#include <stdio.h>
void sum(int *ptr)
{
    *ptr = *ptr * *ptr;
    printf("Square = %d\n", *ptr);
}
int main()
{
    int num = 5;
    sum(&num);
    printf("Number = %d\n", num);
    return 0;
}