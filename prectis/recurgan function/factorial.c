#include <stdio.h>

int factorial()
{
    int fact;
    printf("Enter value to finde factorial:");
    scanf("%d", &fact);
    int factoriala = 1;
    for (int i = 1; i <= fact; i++)
    {
        factoriala = factoriala * i;
    }

    printf("%d", factoriala);
}

int main()
{
    factorial();
}