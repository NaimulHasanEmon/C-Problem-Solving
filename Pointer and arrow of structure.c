#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int id;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Emon");
    s1.id = 5601;
    struct student *ptr = &s1;
    printf("Name: %s\n", (*ptr).name);
    printf("ID = %d\n", ptr->id);
    printf("Address simply = %x\n", &s1);
    printf("Address using pointer = %x\n", ptr);
    return 0;
}
