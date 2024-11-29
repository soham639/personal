#include<stdio.h>

long int fact(int n);
int main()
{
    int n;
 
 printf("enter the required no\n");
 scanf("%d",&n);

int s=fact(n);

printf("answer is %d",s);
    

    }

    long int fact(int n){
        if(n>=1)
        return n*fact(n-1);
        else 
        return 1;
    }
    