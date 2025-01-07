#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 5

int getdata(int arr[], int m)
{
    srand(time(0));
    for (int i = 0; i < m; i++)
    {
        arr[i] = (rand() % 50) + 10;
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int sorting(int arr[], int m)
{
    int a;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int serchin(int arr[], int m)
{
    int element;
    printf("Enter Element");
    scanf("%d", &element);
    int index = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == element)
        {
            printf("Position is found\n");
            break;
        }
        else
        {
            index++;
        }
    }

    if (arr[index] != element)
    {
        printf("element is not found\n");
    }
    else
    {
        printf("position is Found:%d", index);
    }
}
int main()
{
    int arr[max];

    getdata(arr, max);
    sorting(arr, max);
    serchin(arr, max);
}