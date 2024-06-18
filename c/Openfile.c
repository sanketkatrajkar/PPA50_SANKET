#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//O_RTDONLY      read only mode 
//O_WRONLY      write only mode
//O_RDWR        Read + write mode

int main()
{

    char Name [30];
    int fd = 0;

    printf("enter the of  file thta you want to open: \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    if (fd == -1)
    {
        printf("unable to create file \n");
    }
    else{
        printf("file get created with FD %d \n",fd);
    }
    close(fd);

    return 0;
}