//problem to count number of digits
#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)        //this logic is same in all digit problems
    {
       iDigit=iNo%10;
       iCnt++;
       iNo=iNo/10;
    }  

    return iCnt;

}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);
    printf("Number of digits are %d\n",iRet);

    return 0;
}