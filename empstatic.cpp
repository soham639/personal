#include"headerr.h"
class Employee
{
    int eid;
    string ename;
    int salary;


    public:
    static int cnt;
    Employee()
    {
        cnt++;
        eid=101;
        ename="seed";
        salary=50000;

    }
    Employee(int id ,string nm, int sal)
    {
        cnt++;
        eid=id;
        ename=nm;
        salary=sal;

    }
    void disp()
    {
        cout<<"employee details"<<endl;
        cout<<"empid="<<eid<<endl;
        cout<<"ename="<<ename<<endl;
        cout<<"salary ="<<salary<<endl;

    }
    static int getcnt()
    {
        return cnt;
    }
};

int Employee::cnt=0;

int main()
{
    Employee e1,e2,e3(102,"sham",400000);//1st 2 are defualt c'tor and last is parameterised c'tor
    e1.disp();
    e2.disp();
    e3.disp();

    int num=e1.getcnt();

    cout<<"counter is ="<<num;

    return 0;
}