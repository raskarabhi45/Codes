//program to display upto n numbers on screen
//output 1 2 3 4 5 
#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
   printf("%d\n",iCnt);
    }
}
//////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}