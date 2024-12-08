#include<stdio.h>
#define MAX_SIZE 100
void read(int arr[],int *size);
    void printtarr(int arr[],int size);
    int addarr(int arr[],int size);


int main(){
     int arr[MAX_SIZE];
     int size=0,choice;
     
     do{
        printf("enter ur choice\n1 read arr\n2 print arr\n3 add arr\n4 exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
             read(arr,&size);
            break;
        case 2:
             printtarr(arr,size);
             break;
        
        case 3:
           
           printf("the sum of array is %d", addarr(arr,size));        
            break;

           case 4:
             printf("thank you\n");
             break;
        
        default:
            printf("enter valid choice ");
            break;

        }
     }while (choice!=4);

}
void read(int arr[], int *size) {
    printf("Enter the number of elements in the array");
    scanf("%d", size);
    if (*size > MAX_SIZE || *size <= 0) {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX_SIZE);
        *size = 0;
        return;
    }
    printf("Enter %d elements:\n", *size);
    for (int i = 0; i < *size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printtarr(int arr[], int size) {
    printf("The array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int addarr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}