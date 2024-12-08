#include<stdio.h>
#include<stdlib.h>

int main(){
     int arr[100];
    int size;

    printf("enter the size of the array\n");
    scanf("%d",&size);
    if(size>=0 && size<=100){
       
    
    
   
  
    printf("enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("the array elements are\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);

    }

    //bubble sort
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("bubble sorted elements are %d\n",arr[i]);
    }

    //selection sort
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                int temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("selection sorted elements are %d\n",arr[i]);
    }
    }
    else{
        exit(0);
    }
}