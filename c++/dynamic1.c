#include<stdio.h>
#include<stdlib.h>//for the malloc ,call realloc and free

int main()
{

    int Arr[5];   //static memory allocation 
    int Size = 0;
     
    int *ptr = NULL;

    printf("enter the number elements :\n");
    scanf("%d",&Size);

    ptr = (int *) malloc(Size * sizeof(int));
    
    // = (int*)malloc(6*4);
    // = (int *)malloc(24);
     
    //use the memory 

    free (ptr);

    return 0;
}
