#include<stdio.h>

int main()
{

    int A = 90;             // 4 bytes
    char B = "sanket";      // 1 bytes
    double C = 38.33;       // 8 bytes
    float D = 3.3;          // 4 bytes


    int Arr[5];       // 20 bytes
    char chrr[5];      // 5 bytes
    double brr[5];      // 40 bytes
    float frr[5];       // 20 bytes
    

    printf("%d\n",sizeof(A));
    printf("%d\n",sizeof(B));
    printf("%d\n",sizeof(C));
    printf("%d\n",sizeof(D));

    printf("%lu\n",sizeof(Arr));
    printf("%lu\n",sizeof(chrr));
    printf("%lu\n",sizeof(brr));
    printf("%lu\n",sizeof(frr));

int array[4] = {10,34,44,55};

array[0];
array[1];

sizeof(array);
sizeof(array[0]);

array;
&array;
&(array[0]);

    return 0;
}