//factorial
//4
//4*3*2*1=24
//1*2*3*4=24
#include<stdio.h>

int Factorial(int iNo)
{
    int iFact=1;
    for(int i=1;i<=iNo;i++)
    {
        iFact=iFact*i;       //iFact*=i;(shorthand assignment operator)
    }
    return iFact;

}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is :%d\n",iRet);
    return 0;
}