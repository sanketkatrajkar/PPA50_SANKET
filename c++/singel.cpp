#include<iostream>
using namespace std;

class Base 
{
   public:

   int A,B;

     Base()
     {cout<<"insede base constructor\n";}
     ~Base()
     {cout<<"insede base destucotor\n";
     A = 21;
     B = 31;
     }
     void Fun()
     {cout<<"insede base fun\n";}

};
class Derived : public Base
{
    public :

    int X,Y;

     Derived ()
      {cout<<"inside Derived constructor\n";
      X = 51;
      Y = 101;
      }
      ~ Derived ()
      {cout<<"inside Derived destructor\n";}
     void Gun()
      {cout<<"inside Derived Gun\n";}
};

int main()
{

    Derived dobj; //constructor of base constructor of derived 
    cout<<"size of the object is :"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n"; //11
    cout<<dobj.B<<"\n"; //21
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    dobj.Fun();   //base fun
    dobj.Gun(); //derived gun 

    //destructor of derived
    //destructor of base 

    return 0;
}