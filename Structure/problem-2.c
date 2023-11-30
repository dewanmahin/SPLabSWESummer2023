#include <stdio.h>
#include <string.h>
struct Employee{
    char name[100];
    int age;
    float salary;
    char designation[100];
};
int main()
{
    int n; scanf("%d", &n);
    struct Employee emp[n];
    for(int i=0; i<n; i++){
        printf("Enter details for Employee %d:\n", i+1);

        printf("Name: \n");
        char name[100]; getchar();
        gets(name);
        strcpy(emp[i].name, name);

        printf("Age: \n");
        scanf("%d", &emp[i].age);

        printf("Salary: \n");
        scanf("%f", &emp[i].salary);

        printf("Designation: \n");
        char designation[100]; getchar();
        gets(designation);
        strcpy(emp[i].designation, designation);
    }
    printf("\nDETAILS\n");
    for (int i = 0; i < n; i++) {
        printf("Details of Employee %d:\n", i+1);

        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Designation: %s\n", emp[i].designation);
    }

    return 0;
}