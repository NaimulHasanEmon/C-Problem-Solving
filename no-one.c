// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[500], check[50];
//     int count = 0, match = 0;
//     int i,j,k;
//     printf("Enter the paragraph: ");
//     scanf(" %[^\n]", str);
//     printf("Enter the word you want to check: ");
//     fflush(stdin);
//     gets(check);
//     for ( i = 0; i < strlen(str); i++)
//     {
//         count=0;
//         if (str[i] == check[0])
//         {
//             for ( j = i, k = 0; k < strlen(check); j++, k++)
//             {
//                 if (str[j] == check[k])
//                 {
//                     count++;
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
//         }
//         if(count == strlen(check))
//         {
//             match++;
//         }
//     }
//     printf("%d",match);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a=4;
    printf("%5d",a);
    return 0;
}