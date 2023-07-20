#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    float cgpa;
};

int main()
{
    struct Student cse[100];
    strcpy(cse[0].name, "Emon");
    cse[0].roll = 5601;
    cse[0].cgpa = 3.90;
    printf("Name: %s\n", cse[0].name);
    printf("Roll: %d\n", cse[0].roll);
    printf("CGPA: %.2f\n", cse[0].cgpa);
    return 0;
}
