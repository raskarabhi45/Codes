//program to display whether it is perfect number or not
//with less time complexity
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    int iCnt=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
        if(iSum>iNo)
        {
            break;
        }
    }
    if(iSum==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue=0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }
    return 0;
}

//perfect numbers
// 6  28  496