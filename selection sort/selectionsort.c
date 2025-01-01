#include <stdio.h>
#include <stdlib.h>

#define n 5

int arr[n];
int a;
int small;
int sort()
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 50) + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             a = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = a;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
                small = j;
        }
        a = arr[small];
        arr[small] = arr[i];
        arr[i] = a;
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    sort();
}
