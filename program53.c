//accept number from user and reverse that number
#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit=0,iRev=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
      return iRev;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);
    printf("%d is reverse number\n",iRet);
    return 0;
}