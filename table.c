#include<stdio.h>

int main()
{
    int a,ans;
    printf("enter the required no\n");
    scanf("%d",&a);

    for(int i=1;i<=10;i++)
    {
        
        printf("%d*%d=%d\n",a,i,a*i);
    }
}