#include<stdio.h>

int main()
   {
   
    int standard = 0;

    printf("Enter your standard :\n");
    scanf("%d",&standard);

    if(standard == 1)
    {
        printf("your exam is at 7 AM:\n");
    }
     else if (standard == 2)
    {
        printf("your exam is at 8 AM:\n");
    }
     else if (standard == 3)
    {
        printf("your exam is at 9 AM:\n");
    }
     else if (standard == 4)
    {
        printf("your exam is at 10 AM:\n");
    }
    else
    {
        printf("wrong standard:\n");
    }


   return 0;
   }