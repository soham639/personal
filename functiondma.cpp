#include"headerr.h"
#include<string.h>

void namee(char str[]);
void roll(int a);
void marks(float m[]);
int main()
{
   char ident[10];
   int rno;
   float p[5];

   namme(ident[]);
   roll(rno);
   marks(p);

 return 0;
}

void namee(char str[])
{
    cout<<"enter ur name"<<endl;
    gets(str);
    cout<<str<<endl;

}
void roll(int a)
{
    cout<<"enter roll no.";
    cin>>a;
    cout<<a;

}

void marks(float m[])
{
    float *ptr=new float[5];

    cout<<"enter marks"<<endl;
    int i;

    for(i=0;i<5;i++)
    {
        cin>>ptr[i];
    }
  for(i=0;i<5;i++)
    {
        cout<<ptr[i]<<endl;

    }
    delete[] ptr;
}