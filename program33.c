//check whether number is perfect or not
//when there is check whether in the problem them there
//if the sum of the factors of the number is equal to that number then it is perfect number
//should be boolean
#include<stdio.h>
#include<stdbool.h>
int SumOfFactors(int iNo)
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
    }
    return iSum;
}

bool CheckPerfect(int iNo)
{
    int iAns=0;
    iAns=SumOfFactors(iNo);
    if(iAns==iNo)
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