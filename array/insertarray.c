#include<stdio.h>

int main(){

    int arr[50];
    int n;
    printf("Enter valu to print arr:");
    scanf("%d", &n);
    for (int  i = 0; i <n; i++)
    {
        printf("Enter value of arr index:%d:", i);
        scanf("%d", &arr[i]);
    }

   int index = n + 1;
   arr[index] = 20;

   for (int i = 0; i < index; i++)
   {
      printf
   }
   
}