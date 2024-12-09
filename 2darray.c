#include<stdio.h>

int main(){
    int arr[100][100],arr1[100][100];
    int r1,c1;


    printf("enter the no of rows and columns in  matrix\n");
    scanf("%d%d",&r1,&c1);
          

    
        printf("enter matrix1  elements\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                scanf("%d",&arr[i][j]);
            }
         }
          printf("enter matrix2 elements\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("the array elements are\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("\n");
        }
        
        int arrs[100][100];
        
        printf("the sum of matrices is\n");
        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                printf( "%d\t",arrs[i][j]=arr[i][j]+arr1[i][j]);
            }
            printf("\n");
        }


    
}