//problems on digits
//ip:7856
//op: 6,5,8,7
#include<stdio.h>

void DispalyDigits(int iNo)
{
    int iCnt,iDigit=0,sum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)        //this logic is same in all digit problems
    {
       iDigit=iNo%10;
       printf("%d\n",iDigit);
       iNo=iNo/10;
    }  

}

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DispalyDigits(iValue);

    return 0;
}