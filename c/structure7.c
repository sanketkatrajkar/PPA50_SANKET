
#include<stdio.h>

struct Hellow 
{
    int no ;
    float f;

};

struct Demo
{
  int Data ;
  
  struct  Hellow hobj;
};

int main ()
{
    struct  Demo dobj;
    dobj.Data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f = 90.00;
    return 0;
}