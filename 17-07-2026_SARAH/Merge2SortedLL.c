#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* createNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
struct Node* mergeLists(struct Node *list1, struct Node *list2)
{
    struct Node dummy;
    struct Node *tail = &dummy;
    dummy.next = NULL;
    while(list1 != NULL && list2 != NULL)
    {
        if(list1->data <= list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1 != NULL)
        tail->next = list1;
    else
        tail->next = list2;

    return dummy.next;
}
void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    
    struct Node *list1 = createNode(10);
    list1->next = createNode(30);
    list1->next->next = createNode(50);

   
    struct Node *list2 = createNode(20);
    list2->next = createNode(40);
    list2->next->next = createNode(60);

    struct Node *mergedList;
    mergedList = mergeLists(list1, list2);
    printf("Merged Sorted List:\n");
    display(mergedList);
    return 0;
}