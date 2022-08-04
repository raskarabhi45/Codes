//Accept no from user and display its factors
//Input:10
//output1 2 5
#include<stdio.h>

void DisplayFactors(int iNo) //shop
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)   //iCnt<=iNo-1
    {
    if((iNo%iCnt)==0)
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

    DisplayFactors(iValue); //home

    return 0;
}


//Time Complexity: O(N).....