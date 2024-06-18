#include<stdio.h>

int main()
{
    int Arr[5] = { 10, 20, 30, 40, 50};
    printf("Base address of the array is :%d\n",Arr);
    printf("Base address of the array is :%d\n",&Arr);
    printf("Base address of the array is :%d\n",&(Arr[0]));

    printf("first element is :%d\n",Arr[0]); //10
    printf("second element is :%d\n",Arr[1]); //20
    printf("third element is :%d\n",Arr[3]);  //30
    return 0;
}