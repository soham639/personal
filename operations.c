#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("enter values for following nos\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int s=a+b*c;
    int x=a+b*c/d%2;
    int y=d*2/a-b;
    int z=a+b*c-(d++)/e;
    z=a%b+5*c/3*d;
    z=a^b+c%d-a-3*c;

    printf("the answers are %d %d %d %d",s,x,y,z);
}