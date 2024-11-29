#include"headerr.h"

class ctest
{
    public:
    static int cnt;
    ctest()
    {   
        cnt++;
        cout<<"c'tor invoked "<<cnt<<endl;
    }
    
    ~ctest()
    {
        
        cout<<"d'tor invoked "<<cnt<<endl;
        cnt--;
    }
};

int ctest::cnt=0;

ctest t1;  //global

int main()
{
    cout<<"main begins"<<endl;
    ctest t2; //local;

 {
     cout<<"block begins"<<endl;
     ctest t3;
     cout<<"block ends"<<endl;

 }   
 cout<<"main ends"<<endl;

 return 0;


}
 