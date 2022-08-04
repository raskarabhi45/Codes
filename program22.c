#include<stdio.h>

int sum(int iNo)
{
    int isum=0,iCnt=0;

    if(iNo<0)
        {
            iNo=-iNo;
        }
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        isum=isum+iCnt;
    }
     return isum;
    }


int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

   iRet=sum(iValue);
   printf("sum is %d:",iRet);

    return 0;
}