#include<stdio.h>

void DisplayNonFactors(int iNo) //shop
{
      int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
  
    for(iCnt=1;iCnt<=iNo;iCnt++)   //iCnt<=iNo-1
    {
    if((iNo%iCnt)!=0)
    {
     printf("%d\n",iCnt);
    }
    
}
}

int main()
{
    auto int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue); //home

    return 0;
}