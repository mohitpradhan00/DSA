#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}



void bubble(int arr[], int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
            swap(&arr[j+1],&arr[j]);  
                
            }
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
  bubble(arr,5);
  printf("\n bubble sorted:\n");
  printarr(arr,5);
return 0;
}