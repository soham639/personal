#include"headerr.h"

class complex
{
    //protected:
     int imag;
     float real;

     public:
     complex()
     {
         imag=2;
         real=3.14;
     cout<<"default c'tor invoked"<<endl;
     }
     complex(int i,float r)
     {
         imag=i;
         real=r;
         cout<<"param c'tor invoked"<<endl;
     }
     void disp()
     {
         cout<<real<<"+"<<imag<<"i"<<endl;
     }
     complex(const complex& obj)
     {
         this->imag=obj.imag;
         this->real=obj.real;
         cout<<"copy c'tor invoked"<<endl;
         
     }

     void add(complex &c1,complex &c2)
     {
         complex t;
         t.real=c1.real+c2.real;
         t.imag=c1.imag+c2.imag;

         cout<<t.real<<"+"<<t.imag<<"i"<<endl;

     }

     complex operator+(const complex&obj1)
     {
         complex t;
         t.real=this->real+obj1.real;
         t.imag=this->imag+obj1.imag;

         return t;

     }
      complex operator-(const complex&obj1)
     {
         complex t;
         t.real=this->real-obj1.real;
         t.imag=this->imag-obj1.imag;

         return t;

     }

     complex operator-()
     {
        complex temp;
        temp.real=-this->real;
        temp.imag=-this->imag;

        return temp;

     }

     complex & operator++(); //pre increment
     
        complex operator++(int);//post increment
     complex & operator--();//pre increment
     complex operator--(int);

     friend complex operator+(int,complex&);

     friend ostream& operator<<(ostream&,const complex&);

     friend istream& operator>>(istream&, complex&);
};

complex &complex::operator++()
{

         ++this->real;
         ++this->imag;

         return *this; //hidden parameter 
     
}
complex complex::operator++(int)
      {
        complex temp=*this;
        real++;
        imag++;

        return temp;

     }
     complex &complex::operator--()
{

         --this->real;
         --this->imag;

         return(*this); //hidden parameter 
     
}
complex complex::operator--(int)
      {
        complex temp=*this;
        real--;
        imag--;

        return temp;

     }

     complex operator+(int n,complex &o)
     {
         complex t;
         t.real=n+o.real;
         t.imag=n+o.imag;

         return t;

     }
      ostream& operator<<(ostream& o,const complex& c)
      {
        o<<"real part is"<<c.real;
        o<<"imag part is "<<c.imag;

        return o;

      }
      istream& operator>>(istream &i, complex &c)
      {   
          cout<<"enter the values"<<endl;

          i>>c.real;
          i>>c.imag;

          return i;

      }


      