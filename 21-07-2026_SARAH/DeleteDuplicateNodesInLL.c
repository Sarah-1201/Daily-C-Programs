#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

void removeDuplicates(struct Node *head)
{
    struct Node *current, *runner, *duplicate;

    current = head;

    while (current != NULL)
    {
        runner = current;

        while (runner->next != NULL)
        {
            if (runner->next->data == current->data)
            {
                duplicate = runner->next;
                runner->next = runner->next->next;
                free(duplicate);
            }
            else
            {
                runner = runner->next;
            }
        }

        current = current->next;
    }
}

int main()
{
    struct Node *head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insertEnd(&head, value);
    }

    printf("\nOriginal Linked List:\n");
    display(head);

    removeDuplicates(head);

    printf("\nLinked List after removing duplicates:\n");
    display(head);

    return 0;
}