#include<iostream>
using namespace std;

int main()
{
    int No = 11;
    int &x = No;

    cout<<No<<"\n";
    cout<<x<<"\n";

    cout<<&No<<"\n";
    cout<<&x<<"\n";



    return 0;
}