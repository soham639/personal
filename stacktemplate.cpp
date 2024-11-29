#include"headerr.h"

template <class T>

class stack
{
    int size;
    T* arr;
    int top;

    public:
    stack()
    {
        size=10;
        top=-1;
        arr=new T[size];

    }
    void push(T val)
    {
        if(top<size)
        {
            arr[++top]=val;
            cout<<val<<endl;

        }
        else 
        throw"stack full";

    }

    T pop()
    {
        if(top>-1)
        {
            return(arr[top--]);
            
        }
        else 
        throw "stack empty";
    }
    void display()
    {
       for(int i=0;i<=top;i++)
            {
                cout<<"remaining elements are "<<arr[i]<<endl;
            }
    }

    ~stack()
    {
        if(arr)
        {
            delete[] arr;
            arr=NULL;
        }
    }



};

int main()
{
    stack<int> stk;

    cout<<"elements are "<<endl;
    try
    {
        {
            stk.push(10);
            stk.push(30);
            stk.push(45);
        }
    }
    catch(char* msg)
    {
        cout<<msg<<endl;
    }
    try{
        cout<<"popped value is "<<stk.pop();
    }
    catch(char* msg)
    {
        cout<<msg<<endl;

    }
    stk.display();
}