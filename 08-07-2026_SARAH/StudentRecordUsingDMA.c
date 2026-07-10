#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student *stu = (struct Student *)malloc(n * sizeof(struct Student));
    if (stu == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("\nEnter Student Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &stu[i].rollNo);

        printf("Enter Name: ");
        scanf(" %49[^\n]", stu[i].name);

        printf("Enter Marks: ");
        scanf("%f", &stu[i].marks);
    }
    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", stu[i].rollNo);
        printf("Name        : %s\n", stu[i].name);
        printf("Marks       : %.2f\n", stu[i].marks);
    }
    free(stu);
    return 0;
}