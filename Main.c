#include <stdio.h>
#include <string.h>
#include <ctype.h>
void isPalindrome(char copyName[], char revName[], int i, int k, int count)
{
    if (copyName[i] == '\0' && k < 0)
    {
        if (count == i)
            printf("The entered word is a palindrome.\n");
        else
            printf("The entered word is not a palindrome.\n");
        return;
    }
    if (copyName[i] == revName[k])
        count++;
    isPalindrome(copyName, revName, i + 1, k - 1, count);
}
int main()
{
    char name[500];
    scanf(" %[^\n]", name);
    char copyName[500];
    int j = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')
        {
            copyName[j] = tolower(name[i]);
            j++;
        }
    }
    copyName[j] = '\0';
    char revName[500];
    int i = 0;
    while (copyName[i] != '\0')
    {
        revName[i] = copyName[i];
        i++;
    }
    revName[i] = '\0';
    isPalindrome(copyName, revName, 0, i - 1, 0);
    return 0;
}