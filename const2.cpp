//constant pointer to integer 

#include"headerr.h"

int main()
{
    int num1=10;
    int *const ptr=&num1;

    cout<<num1<<endl;
    cout<<*ptr<<endl;

    (*ptr)++;

    cout<<*ptr<<endl;
    *ptr=20;
    cout<<*ptr;

    int num2;
    //ptr=&num2;
    //ptr++
    return 0;
    }