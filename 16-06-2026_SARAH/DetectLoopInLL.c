#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node *detectAndFindLoopStart(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            struct Node *ptr1 = head;
            struct Node *ptr2 = slow;
            while (ptr1 != ptr2)
            {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            return ptr1;
        }
    }
    return NULL;
}   
int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    if (n <= 0)
        return 0; 
    struct Node *head = NULL;
    struct Node *tail = NULL;
    struct Node *nodes[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        nodes[i] = createNode(data);
        if (head == NULL)
        {
            head = tail = nodes[i];
        }
        else
        {
            tail->next = nodes[i];
            tail = nodes[i];
        }
    }
    int pos;
    printf("Enter position to connect last node (0 for no loop): ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= n)
    {
        tail->next = nodes[pos - 1];
    }
    struct Node *loopStart = detectAndFindLoopStart(head);
    if (loopStart)
    {
        printf("Loop Detected\n");
        printf("Loop starts at node with data: %d\n", loopStart->data);
    }
    else
    {
        printf("No Loop Detected\n");
    }
    return 0;
}


/* TERMINAL OUTPUT
Enter number of nodes: 7
Enter data for node 1: 7
Enter data for node 2: 5
Enter data for node 3: 3
Enter data for node 4: 9
Enter data for node 5: 2
Enter data for node 6: 4
Enter data for node 7: 8
Enter position to connect last node (0 for no loop): 4
Loop Detected
Loop starts at node with data: 9
*/

/* DETECT NODE IN LINKED LIST SUMMARY
Floyd’s Cycle Detection Algorithm, also known as the Tortoise and Hare algorithm.
Traverse the linked list using two pointers: a slow pointer moving one node at a time and
a fast pointer moving two nodes at a time.
If the fast pointer reaches the end of the list, no loop exists.
If the slow and fast pointers meet at any node, a loop is present in the linked list.
To find the start of the loop, move one pointer to the head and advance both pointers 
one step at a time; the node where they meet is the start of the loop.
*/