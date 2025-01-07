#include <stdio.h>
#define e 5
int front = -1;
int rear = -1;
int enqueue(int arr[], int n, int z)
{
    printf("Enter element value:");
    scanf("%d", &z);
    if (rear == n - 1)
    {
        printf("queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = z;
    }
    else
    {
        rear++;
        arr[rear] = z;
    }
}

int dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("queue is emty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

int dispaly(int arr[] )
{
    if (front == -1 && rear == -1)
    {
        printf("queue is emty\n");
    }
    else
    {

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[e];
    int x;
    enqueue(arr, e, x);
    enqueue(arr, e, x);
    enqueue(arr, e, x);
    enqueue(arr, e, x);
    enqueue(arr, e, x);

    dispaly(arr);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    dispaly(arr);

    enqueue(arr, e, x);

    dispaly(arr);
}