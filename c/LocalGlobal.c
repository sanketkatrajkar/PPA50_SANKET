#include<stdio.h>

int x = 101;

void Marvellous()
{
    int i = 21;
    int no = 31;

    printf("from marvellous value of no is  :%d\n",no);
    printf("from marvellous value of i  is  :%d\n",i);
    printf("from marvellous value of x  is  :%d\n",x);
}


int main()
{
    int no = 11;
    printf("from main value is no :%d\n",no);
    printf("from main value is x :%d\n",x);
    Marvellous();

    return 0;
}