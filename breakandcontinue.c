#include<stdio.h>

void main()

{
    int num,i=1,sum=0;

    while(i<=10)
    {
        printf("enter a no \n");
        scanf("%d",&num);

        if(num==0)
        {
            break;
        }

        else if(num<0)
        {
            continue;
        }

        sum=sum+num;
        i++;    }
        printf("sum is %d",sum);
}