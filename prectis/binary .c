#include<stdio.h>
#define n 5

int binary(int arr[],int lower,int high){
    int mid;
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    while (lower<=high)
    {
        mid=(lower+high) / 2;
        if (arr[mid]==data)
        {
            return mid;
        }else if (arr[mid]<data)
        {
            lower = mid + 1;
        } else{
            high = mid - 1;
        }
        
        
    }
    
}

int main(){
    int arr[n]={1,2,3,4,5,6,7};
}