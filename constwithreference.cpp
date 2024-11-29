#include"headerr.h"

void display(const int &id);
const int fun(int &);

int main()
{
    int n=10,r;
    cout<<"using const as return type="<<(r=fun(n))<<endl;
    display(n);
    return 0;

}
const int fun(int &id)
{
    return(id);

}
void display(const int&id)
{
     cout<<"func. wiht constant parameter ="<<id<<endl;
}