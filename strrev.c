#include<stdio.h>
#include<stdlib.h>

int main(){
    char arr[100];
    printf("enter the string\n");
   gets(arr);
   fflush(stdin);
  

   int i=0;
    while(arr[i]!='\0'){
    
     i++;
    }
    printf("the length of the string is %d\n",(i));
    int len=i;

    printf("reversal is ");
    for(int j=len-1;j>=0;j--){
        printf("%c",arr[j]);
    }

    

}