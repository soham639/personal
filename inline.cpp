#include"headerr.h"

inline int max(int n1,int n2)
{
    return(n1>n2?n1:n2);
}
int main()
{
    int a,b,r;
  cout<<"enter 2 nos "<<endl;
    cin>>a;
    cin>>b;

    cout<<(r=max(a,b))<<endl;
   return 0;
}
