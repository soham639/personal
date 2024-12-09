#include<stdio.h>

int main(){
  char str1[100],str2[100];
  int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%c",&str1[i]);

    }
    printf("the array elements are\n");
    for(int i=0;i<size;i++){
        printf("%c",str1[i]);


    }

  for(int i=0;str1[i]!='\0';i++){
    str2[i]=str1[i];
  }

    for(int i=0;str2[i]!='\0';i++){
   printf("%c",str2[i]);
    }
}