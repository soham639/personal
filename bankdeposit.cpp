#include"headerr.h"
#include<exception>

class bank
{
    int balance;
    int d;
    public:
    bank()
    {
        balance=1500;
    }
    void deposit(int amnt)
    {
        try
        {
            if(amnt>0)
             { balance+=amnt;


            cout<<"balance is "<<balance<<endl;
             }

              else
              throw d;

                
            
        }
        catch(int err)
        {
            cout<<"invalid deposit"<<endl;
        }
        
    }

    void withdraw(int amnt)
    {
        try
        {
            if(amnt>0&&amnt<=balance)
            {
                balance=balance-amnt;
                cout<<balance<<endl;
            }
            
            else 
            throw d;
        
        }
        catch(int erro)
        {
            cout<<"invalid withdraw"<<endl;
        }
        
    }
};

int main()

{
    int amount;
   bank b1;
    

    cout<<"after deposit the amount is "<<endl;
    b1.deposit(-1500);


    cout<<"after withdraw the amount is"<<endl;
    b1.withdraw(1000);

     


}
