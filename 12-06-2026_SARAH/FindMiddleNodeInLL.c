#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insert(struct Node **head, int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }
    struct Node *temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void findMiddle(struct Node *head)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle node = %d\n", slow->data);
}
void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = NULL;
    int n, value, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert(&head, value);
    }
    printf("\nLinked List:\n");
    display(head);
    findMiddle(head);
    return 0;
}



/* TERMINAL OUTPUT 
Enter number of nodes: 8
Enter value for node 1: 1
Enter value for node 2: 2
Enter value for node 3: 3
Enter value for node 4: 4
Enter value for node 5: 5
Enter value for node 6: 6
Enter value for node 7: 7
Enter value for node 8: 8

Linked List:
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> NULL
Middle node = 5
*/

/* FIND MIDDLE NODE OF A LINKED LIST SUMMARY 
Strat from the head of the linked list and use two pointers.
Move one pointer (slow) one step at a time and the other pointer (fast) two steps at a time.
When the fast pointer reaches the end of the list, the slow pointer will be at the middle node.
In case of an even number of nodes, the slow pointer will point to the second middle node.
*/