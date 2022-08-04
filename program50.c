//problem to get sum number of digits
#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)        //this logic is same in all digit problems
    {
       iDigit=iNo%10;
       iSum=iSum+iDigit;
       iNo=iNo/10;
    }  

    return iSum;

}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);
    printf("Summation of digits are %d\n",iRet);

    return 0;
}