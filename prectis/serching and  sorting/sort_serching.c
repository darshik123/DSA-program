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
        for (int j = 0; j < m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}

int serching(int arr[], int lower, int high)
{
    int element;
    int mid;
    printf("Enter Element to Seerching:");
    scanf("%d", &element);

    while (lower <= high)
    {
        mid = (lower + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            lower = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (arr[mid] != element)
    {
        return -1;
    }
}

int main()
{
    int arr[max] = {20, 25, 32, 21, 3};
    int lower = 0;
    int high = max - 1;
    getdata(arr, max);
    sorting(arr, max);
    int result = serching(arr, lower, high);
    if (result == -1)
    {
        printf("Data not found");
    }
    else
    {
        printf("Data found in postion:%d", result);
    }
}