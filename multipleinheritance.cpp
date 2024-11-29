#include"headerr.h"

class A
{
    public:
    void disp()
    {
        cout<<"class a"<<endl;

    }

};

class B
{
    public:
    void disp()
    {
        cout<<"class b"<<endl;

    }
};

class C:public A,public B
{
    public:
    void show()
    {
       
        A::disp();
        B::disp();
          
        cout<<"class c"<<endl;
    }
};

int main()
{
    C obj;
    A a;
    obj.show();

    obj.A::disp();
}