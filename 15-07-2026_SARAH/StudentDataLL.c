#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[30];
    float marks;

    struct Student *next;
};

int main()
{
    struct Student *head = NULL;
    struct Student *temp = NULL;
    struct Student *newNode = NULL;

    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        newNode = (struct Student *)malloc(sizeof(struct Student));

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &newNode->rollNo);

        printf("Name: ");
        scanf("%s", newNode->name);

        printf("Marks: ");
        scanf("%f", &newNode->marks);

        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("\nStudent Details:\n\n");

    temp = head;

    while(temp != NULL)
    {
        printf("Roll No : %d\n", temp->rollNo);
        printf("Name    : %s\n", temp->name);
        printf("Marks   : %.2f\n", temp->marks);
        printf("----\n");

        temp = temp->next;
    }

    return 0;
}