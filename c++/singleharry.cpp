#include<iostream>
using namespace std;

class Base
{
   int data1;
   public :
   int data2;
   void setdata();
   int getdata1();
   int getdata2();
};
void Base :: setdata(void)
{
    data1 = 10 ;
    data2 = 20 ;
}

int Base :: getdata1()
{
    return data1;
}
int Base :: getdata2()
{
    return data2;
}

class Derived : public Base//class is beign de
{
   int data3;
     public :
     void process();
     void display();
};
void Derived :: process()
{
    data3 = data2 * getdata1();
}
void Derived :: display()
{
    cout<<"value of data 1 is ";
}


int main()
{

    return 0 ;
}