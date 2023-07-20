#include <stdio.h>
#include <string.h>
typedef struct ComputerScienceEngineering
{
    char name[100];
    int id;
} CSE;
int main()
{
    CSE s1;
    strcpy(s1.name, "Emon");
    s1.id = 5601;
    printf("Name = %s\n", s1.name);
    printf("ID = %d\n", s1.id);
    return 0;
}