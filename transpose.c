#include<stdio.h>

int main(){
    int arr[100][100],arrt[100][100];
    int r1,c1;
    
    printf("enter the no of rows and columns in  matrix\n");
    scanf("%d%d",&r1,&c1);
     printf("enter matrix  elements\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                scanf("%d",&arr[i][j]);
            }
         }
         printf("the array elements are\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        
        printf("the transpose matrix is \n");

        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
               if(i!=j){
                arrt[i][j]=arr[j][i];
                printf("%d\t",arrt[i][j]);
               }
               else{
                arrt[i][j]=arr[i][j];
                printf("%d\t",arrt[i][j]);
               }
            }
            printf("\n");
        }
}