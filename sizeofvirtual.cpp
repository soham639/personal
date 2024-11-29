#include"headerr.h"

class A
{
    
    int n;
   public:
   
   void disp()
   {
       cout<<"the value of n is 4 bytes "<<endl;
   }
};

class B
{
    int y;
    public:

    virtual void disp()
    {
        cout<<"the value of y is 8 bytes"<<endl;

    }
};

int main()
{
    A a;
    B b;

    cout<<"the size of obj a is"<<sizeof(a)<<endl;
    cout<<"the size of obj b is"<<sizeof(b)<<endl;
}