#include<stdio.h>

int main()
{
 int No = 22;
 int *p = &No;
 int **q = &p;
 int ***x = &q;
 int ****y = &x;
 int *****z = &y;
  
  return 0;
}