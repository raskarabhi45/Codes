//accept number from user and and check whether number is palimdrome or not 
//if the reverse of that number is equal to the original number then it is called as pallimdrome
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit=0,iRev=0;
    int iTemp;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
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
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet= CheckPallindrome(iValue);
    if(bRet==true)
    {
        printf("%d is pallindrome",iValue);
    }
    else
    {
        printf("%d is not pallindrome",iValue);
    }
    return 0;
}
