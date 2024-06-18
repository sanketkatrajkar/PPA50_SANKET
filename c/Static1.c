#include<stdio.h>

void Marvellous()
{

    static int x = 10;
    x++;
    printf("value of the x is :%d\n",x);

}
  int main()
{

    printf("Demonstrate of register storage class...\n");

    Marvellous();
    Marvellous();
    Marvellous();
    return 0;
}

