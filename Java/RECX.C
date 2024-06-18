#include<stdio.h>

void Display (int No) //colleeee
{
   static int iCnt = 0;

   if (iCnt < No)
    {
        printf("jay ganesh...\n");
        iCnt++;

        Display(No); ///recusive call
    }
}

int main() //caller
{
    Display(4); 

    return 0;
}