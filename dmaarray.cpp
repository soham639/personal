#include"headerr.h"

int main()
{
int *ptr=new int[5];

int i;

cout<<"enter elements"<<endl;
for(i=0;i<5;i++)
{
  cin>>ptr[i];

}
for(i=0;i<5;i++)
{
  cout<<ptr[i]<<endl;

}
delete[] ptr;

return 0;

}

