#include"headerr.h"

class summ
{
    public:
    /*int sum(int a, int b);
    float sum(float a,int b);
    float sum(float a,float b);
   // char sum(int a,int b);
    char sum(char a,char b);
*/
    int sum(int a,int b)
    {
        return a+b;

    }  
    float sum(float a,int b)
    {
        return a+b;
    } 
    float sum(float a,float b)
    {
        return a+b;
    }
    /*char sum(int a,int b)
    {
        return a+b;
    }*/
    char sum(char a,char b)
    {
        return a+b;
    }
    
};

int main()
{
    summ o1;

    int h=o1.sum(4,5);
    cout<<"sum is "<<h<<endl;

    float s=o1.sum(2.7f,4);
    cout<<"sum is "<<s<<endl;

    float j=o1.sum(4.5f,6.7f);
    cout<<"sum is "<<j<<endl;

    /*char e=o1.sum(65,66);
    cout<<"sum is "<<e<<endl;*/

    char q=o1.sum('A','B');
   cout<<"sum is"<<q<<endl;  

}