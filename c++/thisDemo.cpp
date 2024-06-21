#include<iostream>
using namespace std;

class Arithematic 
{
  public:
       int No1;
       int No2;
       
        Arithematic(int A, int B)
        {

            No1 = A;
            No2 = B;
        }
        int Addition ()
        {
            int ans = 0;
            ans = No1 + No2;
            // ans = this->No1 + this->No2;
            return ans;

        }
};

int main()
{

     int ret= 0;
      Arithematic obj(21,11);

      ret = obj.Addition();
      cout<<"Addition is :"<<ret<<"\n";

    return 0;
}