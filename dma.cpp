#include"headerr.h"
#include<string.h>

int main()
{
char*str;
str=new char[100];
gets(str);

cout<<str;
delete[] str;

return 0;

}