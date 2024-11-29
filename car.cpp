#include"headerr.h"

class ccar
{
   
   private:
   int model;
   string series;
   float mileage;
   public:
   void accept()
   {
       cout<<"enter the required details"<<endl;
       cin>>model>>series>>mileage;
   }
   void display()
   {
       cout<<model<<endl<<series<<endl<<mileage<<endl;   
    
   }
   static int cnt;
   ccar()
   {
       cnt++;
       model=10001;
       series="A5";
       mileage=20.23;

   }
   ccar(int m,string ss,float mi)
   {
       cnt++;
       model=m;
       series=ss;
       mileage=mi;

   }
   static int get()
   {
       return cnt;

   }
   
}; 
int ccar::cnt=0;

int main()
{
    ccar obj1;

    obj1.accept();
    obj1.display();
    ccar c1,c2,c3(2002,"b3",19.75);
    c3.display();

    int num=c3.get();

    cout<<"total cars="<<num;//4  cars


    return 0;
}