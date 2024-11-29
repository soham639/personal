#include<stdio.h>
#include<stdbool.h>

int main()
{
   bool a=true;
   bool b=false;

   int x,y,z;
   printf("please enter x,y and z\n");
   scanf("%d%d%d",&x,&y,&z);

   if(x>0||y<0)
   printf("the condition is %d",a);

   else if(x<0 && y>0)
   printf("the condition is %d",b);

   else if(z!=0)
   printf("error occured");
}