
#include"clstr.h"
#include"date.h"
#include<typeinfo>
class Emp
{
    protected:
    int eid;
    int bsal;
    cstr ename;
    Cdate doj;
    //above 2 are contained objects

    public:
    Emp()
    {
        eid=101;
        bsal=45000;

    }
    Emp(int id,int sal,const char*nm,int d,int m,int y):ename(nm),doj(d,m,y)
    {
        eid=id;
        bsal=sal;
    }

    void display()
    {
        cout<<"employee details"<<endl;

        cout<<"employee id"<<eid<<endl;

        cout<<"emp salary"<<bsal<<endl;
        ename.disp();
        doj.display();
    }

    virtual float compute_salary()=0;
    
};
class salesperson:virtual public Emp
    {
        float msales;
        float mcomm;
        public:
        salesperson()
        {
            msales=0.0f;
            mcomm=0.0f;

        }
        salesperson(int i,int sal,const char* nm,int d,int m,int y,float ms,float mc):Emp(i,sal,nm,d,m,y)
        {
            msales=ms;
            mcomm=mc;

        }
        void salesdisp()
        {
            Emp::display();
            cout<<"msales="<<msales<<endl;
            cout<<"mcommision"<<mcomm<<endl;

        }
        float compute_salary()
        {
            return(bsal+(msales*mcomm));
        }
    };
    class manager:virtual public Emp
    {
        int petrol;
        int allowance;
        public:
        manager()
        {
            petrol=0;
            allowance=0;

        }
        manager(int i,int sal,const char*nm,int d,int m,int y,int p,int al):Emp(i,sal,nm,d,m,y)
        {
            petrol=p;
            allowance=al;

        }
        void managerdisp()
        {
            Emp::display();
            cout<<"petrol="<<petrol<<endl;
            cout<<"allowances="<<allowance<<endl;

        }
        float compute_salary()
        {
            return(bsal+petrol+allowance);

        }
    };


 class salesmanager:public salesperson,public manager

 {
      int incen;
      public:
      salesmanager()
      {
          incen=0;
      }
      salesmanager(int i,int sal,const char*nm,int d,int m,int y,float ms,float mc,int p,int al,int in):
      salesperson(i,sal,nm,d,m,y,ms,mc),manager(i,sal,nm,d,m,y,p,al),Emp(i,sal,nm,d,m,y)
      {
          incen=in;
      }

      void smdisp()
      {
          Emp::display();
          salesperson::salesdisp();
          manager::managerdisp();
          cout<<"the incentive is"<<incen<<endl;
      }

      float compute_salary()
      {
          return(bsal+incen);
      }


 };

    void showsalary(Emp *pemp)
    {
        cout<<pemp->compute_salary()<<endl;
    }
int main()
{
    /*Emp e1(103,34567,"seed",2,3,2023);
    e1.display();
    salesperson sp1(200,45000,"sam",4,5,2023,800.4,0.75);
    sp1.salesdisp();

    /*float sall=sp1.compute_salary();
    cout<<"total sal="<<sall<<endl;

    //another way of calling on heap

    salesperson *ptr=new salesperson(300,50000,"same",5,6,2022,300,0.7);

    ptr->salesdisp();
    float salll=ptr->compute_salary();
    cout<<"sal="<<salll<<endl;

    delete ptr;

    manager m1(450,60000,"soham",2,4,2006,1000,500);
     m1.managerdisp();
     float msal=m1.compute_salary();
     cout<<"manager salary="<<msal<<endl;


     return 0;
     showsalary(&sp1);
    
     salesmanager sm1(123,55000,"sam",2,3,2021,33,0.8,1000,2300,5000);
     sm1.smdisp();
     showsalary(&sm1);*/

     Emp *person;
     person=new salesperson;

     cout<<typeid(*person).name()<<endl;

     if(typeid(*person)==typeid(salesperson))
     {
        cout<<"enjoy"<<endl;
     }
     


}