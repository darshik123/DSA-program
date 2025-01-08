#include <stdio.h>
#define max 5
int front = -1;
int rear = -1;

void enqueue(int arr[], int m, int element)
{
    if (rear == -1 && front == -1)
    {
        rear = front = 0;
        arr[rear] = element;
    }
    else if (((rear + 1) % m) == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % m;
        
        arr[rear] = element;
    }
}

int dequeue(int arr[], int m)
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is emty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % m;
    }
}

void display(int arr[], int m)
{
    int i = front;
    if (rear == -1 && front == -1)
    {
        printf("queue is emty\n");
    }
    else
    {
        while (i != rear)
        {
            printf("%d\t", arr[i]);
            i = (i + 1) % m;
        }
        printf("%d\t", arr[rear]);
        printf("\n");
    }
}

int main()
{

    int a[max];
    enqueue(a, max, 10);
    enqueue(a, max, 20);
    enqueue(a, max, 30);
    enqueue(a, max, 40);
    enqueue(a, max, 50);

    display(a, max);
    dequeue(a, max);
    dequeue(a, max);
    dequeue(a, max);
    dequeue(a, max);
    dequeue(a, max);

    display(a, max);
    enqueue(a, max, 70);
    display(a, max);
    enqueue(a, max, 80);
    display(a, max);
}