#include"headerr.h"

float divide(int n,int d)
{
    try
    {
        {
            if(d==0)
            throw d;

            return (float)n/d;

        }
    }
    catch(int err)
    {
        cout<<"cannot divide by zero"<<endl;

        exit(1);

    }
    
}

int main()
{
    int num,den;

    float res=divide(2,0);

    cout<<"the answer is "<<res<<endl;
}
