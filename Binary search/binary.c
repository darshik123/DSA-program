#include<stdio.h>
#include<stdlib.h>
#define n 7
int binary(int arr[7],int low,int high){
    int mid;
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    while (low<=high)
    {
        mid = (low + high) / 2;
        if (arr[mid]==data)
        {
            return mid;
       } else if (arr[mid]<data)
       {
           low = mid + 1;
         
       }else{
           high = mid - 1;
       }
       
       
    }

    if (arr[mid]!=data)
    {
        return -1;
    }
    


    
}

int main(){
    int arr[7] = {5,7,9,10,15,18,19};
    int lower = 0;
    int high = n;
    int result = binary(arr, lower, high-1);
if (result ==-1)
{
    printf("Data not found");
}else{

    printf("data found is index:%d", result);
}

}