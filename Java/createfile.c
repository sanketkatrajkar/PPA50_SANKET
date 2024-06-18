#include<stdio.h>
#include<stdlib>
#include<unistd.h>
#include<fcntl.h>


int main()
{

    char Name [30];
    int fd = 0;

    printf("enter the of  file thta you want to create : \n");
    scanf("%s",Name);

    fd = creat(Name,0777);
    if (fd == -1)
    {
        printf("unable to create file \n");
    }
    else{
        printf("file get created with FD %d \n",fd);
    }
    return 0;
}