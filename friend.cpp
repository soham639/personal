#include"headerr.h"
//to retrieve private variables directly in main without using display function and with the help of object 
class Friend 
{
    int n1,n2;

    public:
    Friend()
        {
            n1=6;
            n2=8;

        }

        friend void disp(Friend &o);
    
};
void disp(Friend &o)
{
    cout<<"accessing"<<" "<<o.n1<<'\t'<<o.n2<<endl;

}
int main()
{
    Friend o1;
    disp(o1);
    return 0;
}