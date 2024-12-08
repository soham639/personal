#include<stdio.h>
 
 int main(){
    int arr[100];
    int size;
    int need,flag=0;
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

    printf("enter the element which u want to search\n");
    scanf("%d",&need);

    for(int i=0;i<size;i++){
        if(arr[i]==need){
            printf("the element is %d at position %d",arr[i],(i+1));
            flag=1;
            break;
           
        }
        
        
    }
    if(flag!=1){
        printf("invalid search\n");
    }

 }

 