#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int id;
};
void printInfo(struct student s1)
{
    printf("%s\n", s1.name);
    printf("%d\n", s1.id);
}
int main()
{
    struct student s1;
    strcpy(s1.name, "Emon");
    s1.id = 5601;
    printInfo(s1);
    return 0;
}
