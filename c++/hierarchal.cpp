#include<iostream>
using namespace std;


class Demo 
{  

};
class Marvellous 
{
   public:

   int A,B;

      Marvellous ()
     {cout<<"insede base constructor\n";}
     ~ Marvellous ()
     {cout<<"insede base destucotor\n";
     A = 21;
     B = 31;
     }
     void Fun()
     {cout<<"insede base fun\n";}

};
class Hello :public Marvellous
{
   public:

   int A,B;

      Marvellous ()
     {cout<<"insede base constructor\n";}
     ~ Marvellous ()
     {cout<<"insede base destucotor\n";
     A = 21;
     B = 31;
     }
     void Fun()
     {
      cout<<"insede base fun\n";
     }

};


int main()
{
    Demo dobj;
    Hello hobj;

    return 0;
}