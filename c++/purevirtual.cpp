#include<iostream>
using namespace std;

class Base 
{
    public:
     int A,B;

     Base()

     {cout<<"base constructor \n";}
     int Addition (int i, int j) //1000
     {return i+j;}
     virtual int Substraction(int i, int j)//2000
     {return i-j;}
     virtual int Multiplication (int i, int j ) = 0;//3000

};

class Derived : public Base 
{
     public:
        int X,Y;
        Derived()
        {cout<<"Derived constructor \n";}
        int Substraction (int i, int j)//3000
        {return i- j;}
        int Multiplication(int i, int j)//4000
        {return i*j;}
        virtual int Division(int i, int j)//5000
        {  return i/j;}
    
};

int main()
{
    // Base bobj; //ERROR 

    Derived dobj;
    Base *bp = &dobj;

   cout<<bp->Addition(10,11)<<"\n";//base chi additon yanar aahe 
   cout<<bp->Substraction(10,11)<<"\n";//derived ch funtion call honat aahe.
   cout<<bp->Multiplication(10,11)<<"\n";//derived ch multiplicaton call honar aahe 

//    cout<<bp->Division(10,11)<<"\n";//Error

    return 0;
}

