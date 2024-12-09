#include<stdio.h>

int strcmp(const char str1[],const char str2[]){
    int i=0;

    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            return str1[i]-str2[i];
          
        }
        i++;
    }
    return str1[i]-str2[i];

}



int main(){
    char str1[100],str2[100];
    printf("enter the strings\n");
    gets(str1);
    gets(str2);
    int diff;
    
    diff=strcmp(str1,str2);

    if(diff==0){
        printf("strings equal");

    }
    else if(diff>0){
        printf("string 1 is larger");
    }
    else if(diff<0){
        printf("string 2 is larger");
    }


    
      
}