#include"clstr.h"
int main()
{
    cstr s1;
    cstr s2("infotech");
    s1.disp();
    s2.disp();
    cstr s3(s2);
    s3.disp();
    cstr s4(s3);//shallow copying
    s4.disp();
    //s2=s1;
    //s2.disp();
    cstr s5;
    s5=s2;
    s5.disp();

    
    try{
        char ch=s1[1];

        cout<<ch<<endl;

    }
    catch(const char *msg)
    {
        cout<<msg<<endl;

    }

    char *p=s2(1);//call only parametrised values no default values working 
    cout<<"the string is:"<<p<<endl;



}