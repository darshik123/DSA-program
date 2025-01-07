#include <stdio.h>
#define n 5

int arr[n];

int top = -1;

void push(int a)
{

    if (top > n - 1)
    {
        printf("your arr  is full\n");
    }
    else
    {
        top++;
        arr[top] = a;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("your arr is emty\n");
    }
    else
    {
        top--;
    }
}

int display()
{
    if (top < 0)
    {
        printf("your arr is emty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

    push(60);
    push(70);
    display();
    pop();
    display();
}