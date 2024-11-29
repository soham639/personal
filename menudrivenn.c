#include<stdio.h>

int main()
{
    int sum=0,i,r,i1,r1;
    float avg;

    printf("enter i and r\n");

    scanf("%d%d",&i,&r);

    for(int j=i;j<=r;j++)
    {
        sum=sum+j;

    }
    printf("sum of 10 nos is %d\n",sum);

    printf("enter i1 and r1\n");

    scanf("%d%d",&i1,&r1);

    int k=i1,sum1=0;
    while (k<=r1)
    {
        sum1=sum1+k;
        k++;

    }

    avg=sum1/10;
    printf("average of 10 nos is %f\n",avg);

    int i2,r2,sq,l;
    printf("enter i2 and r2\n");
    scanf("%d%d",&i2,&r2);
        l=i2;
    do{
        printf("square is %d\n",sq=l*l);
        l++;

    }while(l<=r2);

}