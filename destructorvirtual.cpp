#include"headerr.h"

class A
{
    public:
    A()
    {
        cout<<"c'tor invoked"<<endl;

    }
    virtual ~A()
    {
        cout<<"base class d'tor invoked"<<endl;

    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"derived class c'tor invoked"<<endl;

    }
    ~B()
    {
        cout<<"derived class d'tor invoked"<<endl;

    }
};

int main()
{
    A *ptr=new B;

    delete ptr;
    
}