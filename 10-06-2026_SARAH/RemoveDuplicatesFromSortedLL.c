#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traverse(struct Node *head) // Function to traverse and print the linked list
{
    struct Node *temp = head;    // Start from the head of the list
    while(temp != NULL)      // Loop until the end of the list is reached
    {
        printf("%d ", temp->data);    
        temp = temp->next;     // Move to the next node
    }
    printf("-> NULL");   // Indicate the end of the list
    printf("\n");
}
void removeDuplicates(struct Node *head)  // Function to remove duplicates from a sorted linked list
{
    struct Node *temp = head;         
    while(temp != NULL && temp->next != NULL)  // Loop until the end of the list is reached and there is a next node to compare
    {
        if(temp->data == temp->next->data)
        {
            struct Node *dup = temp->next;  // Store the duplicate node to be removed as we need to free its memory later

            temp->next = dup->next;

            free(dup);
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *newNode;
    struct Node *temp;

    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
    printf("\nBefore Removing Duplicates:\n");
    traverse(head);
    removeDuplicates(head);
    printf("After Removing Duplicates:\n");
    traverse(head);
    return 0;
}

/*Terminal Output
Enter number of nodes: 9
Enter data for node 1: 1   
Enter data for node 2: 4
Enter data for node 3: 6
Enter data for node 4: 6
Enter data for node 5: 6
Enter data for node 6: 7
Enter data for node 7: 7
Enter data for node 8: 9
Enter data for node 9: 9

Before Removing Duplicates:
1 4 6 6 6 7 7 9 9 -> NULL
After Removing Duplicates:
1 4 6 7 9 -> NULL
*/

/* REMOVE DUPLICATES FROM SORTED LINKED LIST SUMMARY
Traverse the linked list starting from the head node.
If the current node's data is equal to the next node's data, remove the next node.
Otherwise, move to the next node.
*/