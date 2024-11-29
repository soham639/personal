#include"headerr.h"

class cstr
{
    int mlen;
    char *mbuff;
    public:
    cstr()
    {
        mlen=0;
        mbuff=new char;
        //*mbuff='\0';

        strcpy(mbuff,"seed");
        cout<<"default c'tor invoked"<<endl;

    }
    cstr(const char *buff)
    {
        mlen=strlen(buff);
        mbuff=new char[mlen+1];
        strcpy(mbuff,buff);
        cout<<"parameterised c'tor invoked"<<endl;

    }
    ~cstr()
    {
        if(mbuff)
        {
            delete[] mbuff;
            mbuff=NULL;
            
        }
        cout<<"d'tor invoked"<<endl;

    }
    void disp()
    {
        cout<<"the string is:"<<mbuff<<endl;

    }
    
    cstr(const cstr&obj)
    {
        this->mlen=obj.mlen;
        this->mbuff=new char[this->mlen+1];

        strcpy(this->mbuff,obj.mbuff);
    }

    cstr & operator=( const cstr & s)
    {
        if(this ==&s)
        {
            return (*this);
        }

        else
        {
            mlen=s.mlen;
             delete []mbuff;
            mbuff=new char [mlen+1];
            strcpy(mbuff,s.mbuff);

            return (*this);

        }
    }


    char operator [](int);
    char* operator()(int);

};

char cstr::operator[](int i)
{
    if (i>=0&&i<mlen)
    return(*(mbuff+i));
    else 
    throw"index out of bound";

}

char* cstr::operator()(int i)
{
    if(i>=0 && i<mlen)
    {
        return (mbuff+i);
    }

}