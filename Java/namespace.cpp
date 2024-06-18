#include<iostream>
using namespace std; //Inbuild namespace 

namespace Marvellous 
{
    class Demo
    {

        //login
    };
}
namespace PPA 
{
    class Hello
    {
        //login
    };
}
using namespace Marvellous;
int main()
{
   std::cout<<"Inside the main../n";
   Demo dobj;
   PPA:: Hello dobj;

   return 0;
}



