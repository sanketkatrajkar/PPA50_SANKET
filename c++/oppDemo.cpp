#include<iostream>
using namespace std;

class Arithematic 
{
  public:
       int No1;
       int No2;
       
       Arithematic()
       {
        No1 = 0;
        No2 = 0;
       }
        Arithematic(int A, int B)
        {

            No1 = A;
            No2 = B;
        }
        int Addition ()
        {
            int ans = 0;
            ans = No1 + No2;
            return ans;

        }
          int Substraction()
        {
            int ans = 0;
            ans = No1 - No2;
            return ans;

        }
};

int main()
{

     int Value1 = 0,Value2 = 0, ret = 0;
    //  int ret1 = 0, ret2 = 0;
    
     cout<<"Enter the first number :\n";
     cin>>Value1;                        

     cout<<"Enter the second number :\n";
     cin>>Value2;
      
      Arithematic obj(Value1, Value2);

      ret = obj.Addition();
      cout<<"Addition is :"<<ret<<"\n";

      ret = obj.Substraction();
      cout<<"Substraction is :"<<ret<<"\n";

    return 0;
}