#include"headerr.h"

template<class T>
void sort(T A[],int n)
{
  int i,j,temp;


for ( i = 0; i < n-1; i++)
{
    for(j=0;j<n-1;j++)
    {
        if(A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
}

int main()
{
    int Arr[100],no;

    cout<<"enter the total no of elements"<<endl;

    cin>>no;


cout<<"enter the elements"<<endl;
    
    for(int i=0;i<no;i++)
    {
        cin>>Arr[i];
    }


cout<<"before sorting the elements are"<<endl;
for(int i=0;i<no;i++)
    {
        cout<<Arr[i]<<endl;
    }





    sort(Arr,no);

    cout<<"the sorted nos are"<<endl;

    for(int i=0;i<no;i++)
    {
        cout<<Arr[i]<<endl;
    }




}