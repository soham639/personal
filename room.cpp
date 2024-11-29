#include"headerr.h"

class Room
{
    double len;
   double  bread;
    double height;

    public:

    Room()
    {
        len=1;
        bread=2;
        height=3;

    }
    Room(double l,double b,double h)
    {
        len=l;
        bread=b;
        height=h;

    }

    
    double area()
    {
        return len*bread;

    }
    double volume()
    {
        return len*bread*height;
    }
    void disp()
    {
        cout<<"length="<<len<<endl;
        cout<<"breadth ="<<bread<<endl;
        cout<<"height="<<height<<endl;
    }
};

int main()
{
    Room R1,R2(4,5,6);
     R1.disp();
    double a1=R1.area();
    cout<<a1<<"square units"<<endl;

    R2.disp();
    double v1=R2.volume();
    cout<<v1<<"cubic units"<<endl;
}