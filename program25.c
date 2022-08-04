
#include<stdio.h>
int CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number \n");
    scanf("%d",&iValue);
    bRet=CheckEven(iValue);
    if( bRet==1)
    {
        printf("%d is even number\n",iValue);
    } 
    else
    {
        printf("%d is odd number\n",iValue);
    }
    

    return 0;
}