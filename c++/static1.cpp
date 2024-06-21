#include<iostream>
using namespace std;


class  Demo
{

    public:

    int No1, No2; //non static characteristic //instance variables
    static int X;  //static cahracteristic 

    Demo()
    {
        No1 = 10;
        No2 = 20;
    }

    void Fun() //non stacic behaviours
    {
        cout<<"Inside the fun\n";
        cout<<No1<<"\n";
        cout<<X;
    }

    static void Gun() //stacic behaviours
    {
        cout<<"inside the gun\n";
        cout<<X<<"\n";
    }

};

int Demo :: X = 11;

int main()
{
    cout<<"value of the X is :"<<Demo::X<<"\n";
    Demo :: Gun();

    Demo obj1;
    Demo obj2;

    cout<<"size of the object is "<<sizeof(obj1)<<"\n";
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";
    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    cout<<"value of the x using object is :"<<obj1.X<<"\n";
    
    return 0;
}