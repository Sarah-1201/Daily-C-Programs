#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
    struct Student *next;
};
int main()
{
    struct Student *head = NULL, *temp, *newNode;
    int n, i, searchRoll, found = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Student *)malloc(sizeof(struct Student));
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &newNode->rollNo);
        printf("Name: ");
        scanf(" %49[^\n]", newNode->name);
        printf("Marks: ");
        scanf("%f", &newNode->marks);
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);
    temp = head;
    while (temp != NULL)
    {
        if (temp->rollNo == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", temp->rollNo);
            printf("Name        : %s\n", temp->name);
            printf("Marks       : %.2f\n", temp->marks);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (!found)
    {
        printf("\nStudent with Roll Number %d not found.\n", searchRoll);
    }
    temp = head;
    while (temp != NULL)
    {
        struct Student *ptr = temp;
        temp = temp->next;
        free(ptr);
    }
    return 0;
}