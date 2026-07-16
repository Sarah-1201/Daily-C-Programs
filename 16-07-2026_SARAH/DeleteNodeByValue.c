#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* insertEnd(struct Node *head, int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return head;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        return newNode;
    }

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

struct Node* deleteNode(struct Node *head, int value)
{
    struct Node *temp = head;
    struct Node *prev = NULL;

    if(head == NULL)
    {
        printf("List is empty.\n");
        return head;
    }

    if(head->data == value)
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("%d deleted successfully.\n", value);
        return head;
    }

   
    while(temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("%d not found in the list.\n", value);
        return head;
    }

  
    prev->next = temp->next;
    free(temp);

    printf("%d deleted successfully.\n", value);

    return head;
}

void display(struct Node *head)
{
    struct Node *temp = head;

    if(head == NULL)
    {
        printf("Linked List is empty.\n");
        return;
    }

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    int n, value, i, deleteValue;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the node values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    display(head);

    printf("Enter the value to delete: ");
    scanf("%d", &deleteValue);

    head = deleteNode(head, deleteValue);

    display(head);

    return 0;
}