#include<stdio.h>
  
  void concat(char str1[],char str2[]){
    int i=0,j=0;

    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;j++;

     }
     str1[i]='\0';

     printf("concatinated strings are %s",str1);
  }
 
int main(){
    char str1[100],str2[100];
    printf("enter the strings\n");
    gets(str1);
    gets(str2);

    concat(str1,str2);
    
    

}