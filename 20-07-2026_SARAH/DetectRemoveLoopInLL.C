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

    newNode = (struct Node *)malloc(sizeof(struct Node));

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

void createLoop(struct Node *head, int position)
{
    struct Node *loopNode = NULL;
    struct Node *temp = head;
    int count = 1;

    if(position == 0)
        return;

    while(temp->next != NULL)
    {
        if(count == position)
        {
            loopNode = temp;
        }

        temp = temp->next;
        count++;
    }

    if(loopNode != NULL)
    {
        temp->next = loopNode;
    }
}

void detectAndRemoveLoop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            printf("\nLoop detected.\n");

            slow = head;

            
            if(slow == fast)
            {
                while(fast->next != slow)
                {
                    fast = fast->next;
                }
            }
            else
            {
                while(slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            fast->next = NULL;

            printf("Loop removed successfully.\n");
            return;
        }
    }

    printf("\nNo loop detected.\n");
}


void display(struct Node *head)
{
    struct Node *temp = head;

    printf("\nLinked List:\n");

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
    int n, value, position, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the node values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Enter the position where the last node should point (0 for no loop): ");
    scanf("%d", &position);

    createLoop(head, position);

    detectAndRemoveLoop(head);

    display(head);

    return 0;
}