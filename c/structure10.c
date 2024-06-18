#include<stdio.h>

//self referentioal structure 
struct Demo
{
    int No;
    int data;
    char Null;
    struct Demo *next;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

   obj1.data = 11;
   obj1.next = &obj2;
   
   obj2.data = 21;
   obj2.next = &obj3;
   
   obj3.data = 51;
   obj3.next = NULL;


    return 0;
}