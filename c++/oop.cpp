#include<iostream>
using namespace std;

// class Declaration
class Demo 
{
   public:  //access specifer 
       int No1; //charateristic 
       int No2; //charateristic 

       Demo()  //constructor 
       {
        cout<<"Inside the constructor\n";
        No1 = 11;
        No2 = 21;
       }

       ~Demo() //Destructor 
       {
        cout<<"Inside the Destructor\n";
       }

       void Fun() //Behaviours
       {
        cout<<"Inside the Fun of Demo class\n";
       }
};

int main ()
{
    cout<<"Inside the main\n";

    Demo obj1;
    cout<<"size of object is:\n"<<sizeof(obj1)<<"\n";
    cout<<"Value of the No1:"<<obj1.No1<<"\n";
    cout<<"Value of the No2:"<<obj1.No2<<"\n";
    obj1.Fun();
    

    return 0;
}