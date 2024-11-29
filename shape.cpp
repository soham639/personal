#include"headerr.h"
#define pi 3.14
class shape
{
    public:
    virtual void area()=0;
};

class triangle:public shape
{
    int height,base;
    public:
     triangle(int h,int be)
     {
         height=h;
         base=be;
     }
    void area()
    {
        cout<<"the area of triangle is "<<0.5*height*base<<endl;
    }
};

class rectangle:public shape
{
    int length,breadth;
    public:
   rectangle(int l,int b)

{
length=l;
breadth=b;
}
   
    void area()
    {
        cout<<"the area of rectangle is"<<length*breadth<<endl;
    }
};

class square
{
    int side;
    public:
    square(int si)
    {
        side=si;

    }
    void area()
    {
        cout<<"the area is "<<(side*side)<<endl;
    }


};
class circle
{
    int radius;
    public:
    circle(int r)

    {
      radius=r;
    }

    void area()
    {
        cout<<"the area of circle is"<<(pi*radius*radius)<<endl;
    }
};

int main()
{
  triangle t(2,3);
  t.area();

  rectangle r(4,5);
  r.area();

  square s(6);
  s.area();

  circle c(2);
  c.area();
}