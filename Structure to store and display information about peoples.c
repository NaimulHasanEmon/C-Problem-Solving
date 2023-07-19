#include <stdio.h>
struct person
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    int n;
    printf("How many persons you want to add: ");
    scanf("%d", &n);
    struct person person[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter information of person%d: \n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", &person[i].name);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
        printf("Enter salary: ");
        scanf("%f", &person[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Information of person%d: \n", i + 1);
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
    }
    return 0;
}
