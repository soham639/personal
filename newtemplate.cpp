#include"headerr.h"

template<typename T>

class stack
{
   T* arr;
   int size;
   int top;

   public:
   stack()
   {
    int size=10;
    int top=-1;
    arr=new T[size];

   }
   void push(T data)
   {
       arr[++top]=data;
       
   }
   T pop()
   {
    return arr[top--];
   }

   bool isfull()
   {
    return top==size-1;
   }
   bool isempty()
   {
    return top==-1;
   }

};
int main()
{
    stack<int> st;
    st.push(24);
    st.push(35);

    cout<<st.pop()<<endl;
}
