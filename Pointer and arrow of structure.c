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
    struct Student s1 = {"Emon", 5601, 3.90};
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);
    struct Student *ptr;
    ptr = &s1;
    printf("Address of s1 = %x\n", ptr);
    printf("Name of s1 with pointer = %s\n", (*ptr).name);
    printf("Roll of s1 with arrow = %d\n", ptr->roll);
    return 0;
}
