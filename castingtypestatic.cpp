#include"headerr.h"

int main()
{
    double dval=12.34;
    int ival;


    ival=dval; //implicit 

    ival=static_cast<int>(dval);
    //static cast explicit

    cout<<ival<<endl;

}