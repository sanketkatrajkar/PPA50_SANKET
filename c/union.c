#include<stdio.h>

#pragma pack(1)
struct Demo
{
 int No;
 float f;
 char c;
 int data;
};
union Hello
{
 int No;
 float f;
 char c;
 int data;
};
int main()
{
    struct Demo dobj;
    printf("size of the structure %d\n",sizeof(dobj)); //13

    union Hello hobj;
    printf("size of the union %d\n",sizeof(hobj)); //4
    return 0;


}