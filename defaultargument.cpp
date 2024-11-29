#include"headerr.h"

void disp(int x,int y,int z)
{
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
 void disp(int x,int y=5,int z=0);

 int main()
 {
     //disp();    it will give error becoz x is not defined
     disp(24);
     disp(10,20,25);
     disp(10,' ',45);// ascii value of space is taken

 }






