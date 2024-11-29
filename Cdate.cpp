#include"date.h"
Cdate fun()//returning constant object
{
    Cdate d1;

    return d1;
}
Cdate fun1( Cdate &ob)//passing parameter and accepting 
{
    ob.accept();

    return ob;
}

int main()
{
    Cdate dobj;
    Cdate qobj;
    Cdate pobj(1,2,2006);
    qobj.display();
     dobj.accept();
     dobj.display();
    
     
     
     pobj.display(); 
      pobj.setDay(3);
     pobj.display();
     int k= pobj.get();

     cout<<"month is ="<<k<<endl; 


     Cdate *ptr =new Cdate(5,5,2006);//date on heap
     ptr->display();
     delete ptr;  

    const Cdate d1(5,7,9);
    int dayy=d1.getday();
    cout<<"day is ="<<dayy<<endl;


    Cdate e,f;
    e=fun();
    e.display();
   // g=fun1(f);
   // g.display();
   e=fun1(f);
   e.display();
     return 0; 
}