#include"complexheader.h"

int main()
{
    complex c1,c2(5,12.2f);

    c1.disp();
    c2.disp();

    complex c3(c2);//copy c'tor
    c3.disp();

    complex c4,c5,c6(1,4);

    c4.add(c5,c6);

    complex c9,c7(1,3),c8(5,4);

     c9=c7.operator+(c8);

     c9.disp();
      
      complex c10,c11(5,7),c12(4,3);

      c10=c11-c12;

      c10.disp();


      complex cc1,cc2;
 
      cc2=-cc1;
   
      //c2=c1.operator-();
      cc2.disp();


      complex cc3,cc4(3,6);

      cc3=cc4.operator++();
       //cc3=++cc4;
       cc3.disp();

       //cc3=cc4.operator++(int );  //doubt
     cc3=cc4++;
       cc3.disp();

       
     complex cc5,cc6(5,6);

     cc5=cc6.operator--();
     cc5.disp();

     cc5=cc6--;
     cc5.disp();


     complex fc;
     int g=5;
     complex fc1(1,5);

     fc=g+fc1;

     fc.disp();
      complex ic1;

      cin>>ic1;
     

    cout<<ic1<<endl;
    

     
     return 0;  


}