#include <stdio.h>
#include <string.h>
typedef struct students
{
    char name[50];
    char id[15];
    char section[5];
} stu;
typedef struct teachers
{
    char name[50];
    char id[15];
} tea;
typedef struct admins
{
    char name[50];
    char id[15];
} adm;

void forStudents(int n, stu s[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", &s[i].name);
        printf("Enter ID: ");
        scanf(" %[^\n]", &s[i].id);
        printf("Enter section: ");
        scanf(" %[^\n]", &s[i].section);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Information of student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("ID: %s\n", s[i].id);
        printf("Section: %s\n", s[i].section);
    }
}
void forTeacher(int n, tea t[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Information for teacher %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", &t[i].name);
        printf("Enter ID: ");
        scanf(" %[^\n]", &t[i].id);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Information of teacher %d:\n", i + 1);
        printf("Name: %s\n", t[i].name);
        printf("ID: %s\n", t[i].id);
    }
}
void forAdmin(int n, adm a[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Information for admin %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", &a[i].name);
        printf("Enter ID: ");
        scanf(" %[^\n]", &a[i].id);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Information of admin %d:\n", i + 1);
        printf("Name: %s\n", a[i].name);
        printf("ID: %s\n", a[i].id);
    }
}
int main()
{
    char ch;
    printf("Who's information you want to enter?(S/T/A): ");
    scanf("%ch", &ch);
    if (ch == 'S')
    {
        printf("How many students information you want to enter?: ");
        int n;
        scanf("%d", &n);
        stu s[n];
        stu *ptr = &s[n];
        forStudents(n, ptr);
    }
    else if (ch == 'T')
    {
        printf("How many teachers information you want to enter?: ");
        int n;
        scanf("%d", &n);
        tea t[n];
        tea *ptr = &t[n];
        forTeacher(n, ptr);
    }
    else if (ch == 'A')
    {
        printf("How many admins information you want to enter?: ");
        int n;
        scanf("%d", &n);
        adm a[n];
        adm *ptr = &a[n];
        forAdmin(n, ptr);
    }
    else
        printf("Sorry! You entered the wrong keyword.");
    return 0;
}