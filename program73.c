//return largest number from that n numbers
//interview for sure
//not working for all negative number
#include<stdio.h>
#include<stdlib.h>

int MaxNumber(int Arr[],int iLength)
{
    int iMax=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]>iMax)
       {
           iMax=Arr[iCnt];
       }

    }
    return iMax;

}

int main()
{
    int *ptr=NULL;
    int iCnt=0,iRet=0;
    int iSize=0;

    printf("ENter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    printf("Enter the values ");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=MaxNumber(ptr,iSize);

    printf("Maximum number  is %d\n",iRet);
    free(ptr);

    return 0;
}