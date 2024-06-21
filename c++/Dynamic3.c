#include<stdio.h>
#include<stdlib.h>//for the malloc ,call realloc and free

int main()
{
    int *ptr = NULL;
    
    ptr = (int *)malloc (5 * sizeof (int ));
    
    //use of the memory

    ptr = (int *) realloc(ptr, 10 * sizeof(int));
 
    free (ptr);
    

    return 0;
}
