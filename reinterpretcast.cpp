#include"headerr.h"


int main()
{
    int *a;
    int b=65;

    a=&b;

    char *ch= reinterpret_cast<char*>(a);

    cout<<"after casting "<<*ch<<endl;
    
    }