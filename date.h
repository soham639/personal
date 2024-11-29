#include"headerr.h"


class Cdate
{
    private:
    int day;
    int mon;
    int year;
    public:
    void accept()
    {
        cout<<"enter date"<<endl;
        cin>>day>>mon>>year;
    }

    void display()//facilitator
    {
        cout<<day<<"/"<<mon<<"/"<<year<<endl;    
        
        }

        Cdate()//no argument c'tor
        {
            day=1;
            mon=1;
            year=2000;

        }

        Cdate(int dd,int mm, int yy)//parameterised c'tor
        {
            day=dd;
            mon=mm;
            year=yy;
        }

        void setDay(int d)//mutator
        {
            this->day=d; //this keyword
          }

         int get(void) //accessor
         {
            return mon;
         }
        int getday() const;


};

int Cdate::getday() const
{
    return day;
}