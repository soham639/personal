#include<stdio.h>

int main(){
    int arr[100];
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("the array elements are\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);

    }

   int min=arr[0];
   for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
   }
   printf("the minimum element is %d\n",min);

   int max=arr[0];
   for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   printf("the maximum element is %d\n",max);


}