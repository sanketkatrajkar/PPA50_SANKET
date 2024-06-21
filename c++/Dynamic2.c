#include<stdio.h>
#include<stdlib.h>//for the malloc ,call realloc and free

int main()
{

    int Arr[5];   //static memory allocation 
    int Size = 0;
     
    int *ptr = NULL;

    printf("enter the number elements :\n");
    scanf("%d",&Size);

    ptr = (int *) calloc(Size ,sizeof(int));
    // ptr = (int *) calloc(12 ,500ml);
    //ptr = (int *) malloc(6000ml);
    
    //use the memory 

    free (ptr);

    return 0;
}
