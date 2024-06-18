#include<stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;

    printf("Enter the number:\n");
    scanf("%d",&No);
    
    Ans = No % 2;

    if(Ans == 0)
    {
        printf("number is the even:\n");

    }
    else{
        printf("number is the odd:\n");
    }
    return 0;
}