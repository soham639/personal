#include"headerr.h"

class A
{
    protected:
    int x; 
    public:
    A()
    {
        x=4;
    }
    A(int a)
    {
        x=a;
    }
    void dispA()
    {
        cout<<x<<endl;

    }
};
class B:public A
{
    protected:
    int y;
    public:
    B()
    {
        y=5;

    }
    B(int a,int b):A(a)
    {
        y=b;
    }
    void dispB()
    {
        cout<<y<<endl;
    }

};
class C:public B
{
    protected:
    int z;
    public:
    C()
    {
        z=7;

    }
    C(int a,int b,int c):B(a,b)
    {
        z=c;
    }
    void dispC()
    {
        cout<<z<<endl;
    }
    void add()
    {
        cout<<"addition is "<<x+y+z<<endl;
    }

};
int main()
{
    C obj;
    obj.add();
    obj.dispC();
    //similarly we can objects for A and B
    

    return 0;
}