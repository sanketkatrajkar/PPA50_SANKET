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
    int iRet = 0;
    char Data[30] = {'\0'};

    printf("enter the of  file thta you want to open: \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    iRet = read(fd, Data,10);

    printf(" %d bytes gets succesfully read from the file \n",iRet);
    printf("%s \n",Data);
    close(fd);

    return 0;
}