#include"headerr.h"

class A
{
    protected:
    int n;
    public:
    A()
    {
       n=10;

    }
    virtual void disp()
    {
        cout<<"class base"<<endl;

    }
    virtual void show()
    {
        cout<<"base"<<endl;

    }
};

class B:public A
{
    public:
    void disp()
    {
        cout<<"class B"<<endl;
    }
    void show()
    {
        cout<<n<<endl;
    }
};

int main()
{
    A a;
    A *ptr=new B();
    ptr->disp();
    ptr->show();
}

// if functions are made virtual then the fucntion is passed to the derived class