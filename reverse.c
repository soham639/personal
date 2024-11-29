#include<stdio.h>

int main()
{
    int a;
    int temp;
    int num=0;

    printf("enter the required no\n");
    scanf("%d",&a);

    while(a!=0)
    {
        temp=a%10;
        num=num*10+temp;
        a=a/10;

    }
    printf("reversed no is%d",num);
}