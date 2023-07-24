#include <stdio.h>
int main()
{
    printf("Input a string: ");
    char str[100];
    scanf(" %[^\n]", &str);
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("The length of the given string \"Welcome\" is %d\n", count);
    return 0;
}