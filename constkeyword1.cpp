#include"headerr.h"

//pointer to constant integer

int main()
{
    int num1=10;
    int num2=20;

    const int *ptr=&num1;

    cout<<"num1 "<<num1<<endl;

    cout<<"pointer val="<<*ptr<<" "<<"address="<<ptr<<endl;

    ptr=&num2;
    ptr++;

    cout<<"num2="<<num2<<endl;
    cout<<"ptr val after change="<<*ptr<<"address ="<<ptr<<endl;

    //(*ptr)++; error
    //cout<<"after increment ="<<*ptr<<endl;
    //*ptr=50;

    return 0;
}