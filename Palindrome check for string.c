#include <stdio.h>
void Palindrome(char name[], char revName[], int i, int k, int count)
{
    if (name[i] == '\0' && k < 0)
    {
        if (count == i)
            printf("The entered word is a palindrome.\n");
        else
            printf("The entered word is not a palindrome.\n");
        return;
    }
    if (name[i] == revName[k])
    {
        count++;
    }
    Palindrome(name, revName, i + 1, k - 1, count);
}
int main()
{
    printf("Enter a string: ");
    char name[20];
    scanf(" %[^\n]", name);
    char revName[20];
    int i = 0;
    while (name[i] != '\0')
    {
        revName[i] = name[i];
        i++;
    }
    revName[i] = '\0';
    Palindrome(name, revName, 0, i - 1, 0);
    return 0;
}
