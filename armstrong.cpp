#include<stdio.h>

int main()
{
    int n,temp,rem,result=0;
    printf("enter ur no\n");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;

        result=result+rem*rem*rem;

        temp=temp/10;
    }


    if(result==n)
    {
        printf("no is armstrong");

    }
    else 
    {
        printf("no is not armstrong");
    }
}