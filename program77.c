///////with flag
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
           bFlag=true;
           break;
       }
    
    }
    return bFlag;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0;
    bool bRet;
    int iSize=0,iNo=0;

    printf("ENter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    printf("Enter the values ");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("enter the element to be search\n");
    scanf("%d",&iNo);

    bRet=Search(ptr,iSize,iNo);

    if(bRet==true)
    {
        printf("%d is present in array\n");
    }
    else{
        printf("%d is not present in array\n");
    }
    free(ptr);

    return 0;
}