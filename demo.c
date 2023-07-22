#include <stdio.h>
typedef struct complex
{
    int r, i;
} com;
int main()
{
    com n1 = {4, 2};
    com *ptr = &n1;
    printf("Real part: %d\n", ptr->r);
    printf("Imaginary part: %d\n", ptr->i);
    return 0;
}