#include<stdio.h>

int main(){
  char str1[100],str2[100];
  
  int i;
    
   gets(str1);

  for( i=0;str1[i]!='\0';i++){
    str2[i]=str1[i];
  }
   str2[i]='\0';

   printf("\nthe copied string is %s",str2);
}
    