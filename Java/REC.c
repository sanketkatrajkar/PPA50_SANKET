#include<stdio.h>

void Display (int No) //colleeee
{
    int iCnt = 0;
    while(iCnt < No)
    {
        printf("jay ganesh...\n");
        iCnt++;
    }
}

int main() //caller
{
    Display(4); 

    return 0;
}