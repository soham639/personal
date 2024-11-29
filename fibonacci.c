#include<stdio.h>

int main()
{
    int a=0,b=1,n,c,temp;

    printf("enter the no u want in fibonacci series\n");

    scanf("%d",&n);

    printf("%d\n%d\n",a,b);

    for(int i=2;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);

        a=b;
        b=c;
    }


}