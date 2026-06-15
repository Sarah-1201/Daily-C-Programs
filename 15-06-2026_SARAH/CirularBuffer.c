#include <stdio.h>
#define SIZE 5

int buffer[SIZE];
int front = 0;
int rear = 0;

void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("Buffer Full\n");
        return;
    }
    buffer[rear] = value;
    rear = (rear + 1) % SIZE;
    printf("%d inserted\n", value);
}
void dequeue()
{ 
    if (front == rear)
    {
        printf("Buffer Empty\n");
        return;
    }
    printf("%d deleted\n", buffer[front]);
    front = (front + 1) % SIZE;
}
void display()
{
    int i;
    if (front == rear)
    {
        printf("Buffer Empty\n");
        return;
    }
    printf("Buffer: ");
    for (i = front; i != rear; i = (i + 1) % SIZE)
    {
        printf("%d ", buffer[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(50);
    enqueue(60);
    enqueue(70); // This should show "Buffer Full"
    display();
    return 0;
}
/* TERMINAL OUTPUT 
10 inserted
20 inserted
30 inserted
40 inserted
Buffer: 10 20 30 40 
10 deleted
20 deleted
Buffer: 30 40 
50 inserted
60 inserted
Buffer Full
Buffer: 30 40 50 60 
*/

/* Ring Buffer Summary
A ring buffer (circular buffer) is a fixed-size FIFO data structure that reuses 
memory by wrapping around to the beginning when the end is reached, allowing 
efficient storage and retrieval of continuous data streams without shifting elements.
Two pointers are used, front and rear. Initially front and rear are at the beginning 
of array and elements are added at rear end and deleted from the front end.  
*/