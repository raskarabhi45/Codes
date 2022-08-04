//File Creation in c

//to get the name of file from user and file of that name
/*
Enter file name to create 
India.txt
File is successfully created with FD 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> //universal standard
#include<fcntl.h>  //file control .h

int main()
{
    char Fname[20];
    int fd=0;   //File descriptor

    printf("Enter file name to create \n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file");
        return -1;   //failure
    }

    printf("File is successfully created with FD %d\n",fd);

    return 0;
}