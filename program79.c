//////find out index of that occuring number
//first occurance
#include<stdio.h>
#include<stdlib.h>

int SearchFirst(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
   
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {  
           break;
       }
    }
       if(iCnt==iLength)
       {
           return -1;
       }
       else
       {
           return iCnt;
       }
    
    }


int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iRet;
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

    iRet=SearchFirst(ptr,iSize,iNo);
    if(iRet==-1)
    {
        printf("There is no such element in array");
    }
    else{
    printf("Occurance of value is at %d\n",iRet);
     }
    free(ptr);

    return 0;
}
