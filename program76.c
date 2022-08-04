//accept one number and accept another 1 number and find out frequency of that number in n numbers
//return smallest number from that n numbers
//interview for sure
//positive and negative
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iFre=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
         iFre++;
       }

    }
    return iFre;

}

int main()
{
    int *ptr=NULL;
    int iCnt=0,iRet=0;
    int iSize=0,iNo=0;

    printf("ENter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    printf("Enter the values ");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("enter the element to calculate frequency\n");
    scanf("%d",&iNo);

    iRet=Frequency(ptr,iSize,iNo);

    printf("Frequency of  %d is %d\n",iNo,iRet);
    free(ptr);

    return 0;
}