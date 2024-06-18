#include<stdio.h>

int main()
{

    int standard = 0;

    printf("Enter your standard :\n");
    scanf("%d",&standard);
  
    switch (standard)
    {
       case 1:
       printf("your exam is at 7am:\n");
           break;
       case 2:
       printf("your exam is at 8am:\n");
           break;
           case 3:
       printf("your exam is at 9am:\n");
           break;
           case 4:
       printf("your exam is at 10am:\n");
           break;
       default:
       printf("wrong standard:\n");
           break;
    }

    return 0;
}