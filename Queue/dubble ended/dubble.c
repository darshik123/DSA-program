#include <stdio.h>
#define max 5
int front = -1;
int rear = -1;

int insert_front(int arr[], int m, int element)
{
    if ((front == 0 && rear == m - 1) || front == rear + 1)
    {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[front] = element;
    }
    else if (front == 0)
    {
        front = m - 1;
        arr[front] = element;
    }
    else
    {
        front = front - 1;
        arr[front] = element;
    }
}

int insert_rear(int arr[], int m, int element)
{
    if ((front == 0 && rear == m - 1) || rear == front - 1)
    {
        printf("Queue is full\n");
    }
    else if (rear == -1 && front == -1)
    {
        rear = 0;
        arr[rear] = element;
    }
    else if (rear == m - 1)
    {
        rear = 0;
        arr[rear] = element;
    }
    else
    {
        rear++;
        arr[rear] = element;
    }
}

int delet_front(int arr[], int m)
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is emty\n");
    }
    else if (rear == front)
    {
        rear = front = -1;
    }
    else if (front == m - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

int delet_rear(int arr[], int m)
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is emty\n");
    }
    else if (front == rear)
    {
        rear = front = -1;
    }
    else if (rear == 0)
    {
        rear = m - 1;
    }
    else
    {
        rear--;
    }
}
int display(int arr[], int m)
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is emty\n");
    }
    else
    {

        while (i != rear)
        {
            printf("%d:%d\t", arr[i], i);

            i = (i + 1) % m;
        }
        printf("%d:%d\t\n", arr[rear], rear);
    }
}

int main()
{
    int arr[max];

    insert_front(arr, max, 10);
    insert_front(arr, max, 20);
    insert_front(arr, max, 30);
    display(arr, max);
    insert_rear(arr, max, 40);
    insert_rear(arr, max, 50);
    display(arr, max);
    delet_front(arr, max);
    delet_front(arr, max);
    display(arr, max);

    delet_rear(arr, max);
    delet_rear(arr, max);

    display(arr, max);
    insert_rear(arr, max, 20);
    insert_front(arr, max, 30);
    insert_rear(arr, max, 40);
    insert_rear(arr, max, 50);
    delet_front(arr, max);
    delet_rear(arr, max);

    insert_rear(arr, max, 60);
    insert_front(arr, max, 70);

    display(arr, max);
}