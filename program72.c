// accept n numbers and perform addition of that number
#include<stdio.h>
#include<stdlib.h>

int AddNumbers(int Arr[],int iLength)
{
    int iSum=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;

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
    iRet=AddNumbers(ptr,iSize);

    printf("Addition is %d\n",iRet);
    free(ptr);

    return 0;
}