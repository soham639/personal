//const pointer to const integer 

#include"headerr.h"

int main()
{

    int num1=10;
    int num2=20;

    const int *const ptr=&num1;

    cout<<num1<<endl;
    cout<<*ptr;

    //ptr++
    //(*ptr)++
    //ptr=&num2


    return 0;

}