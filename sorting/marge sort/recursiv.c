#include <stdio.h>

int recursive(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return recursive(num - 1) * num;
    }
}

int main()
{
    int num;
    printf("Enter value to finde factorial:");
    scanf("%d", &num);

    peintf("%d", recursive(num));
}