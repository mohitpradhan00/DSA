#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void insertion(int arr[], int n){
    int i,j;
    for ( i = 1; i < n; i++)
    {
        j=i;
        while (j>0&&arr[j-1]>arr[j])
        {
           swap(&arr[j],&arr[j-1]);
            //  int temp=arr[j-1];
            //  arr[j-1]=arr[j];
            //  arr[j]=temp;
            j--;
        }
        
    }
    
}







void printarr(int arr[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main() 
{
  int arr[5]={80,50,46,75,6};
  printarr(arr,5);
  insertion(arr,5);
  printf("\n insertion sorted:\n");
  printarr(arr,5);
  
    return 0;
}


