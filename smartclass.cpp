#include"complexheader.h"
class smart
{
    complex *ptr;
    public:
    smart(int r,int i)
    {
        ptr=new complex(r,i);
    }
    ~smart()
    {
        delete ptr;

    }
    complex* operator->()
    {
        return(ptr);
    }
    complex& operator*()
    {
        return(*ptr);

    }

};

int main()
{
    smart s(7,4);//gives error for default values call parameterised 

    s->disp();
    (*s).disp();

    return 0;
}