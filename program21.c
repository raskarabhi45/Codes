//program to display upto n numbers on screen
//using whihle loop
//output 1 2 3 4 5 
#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
        //return; becoz of this we dont even go to loop
    }

   iCnt=1;
    while(iCnt<=iNo)
    {
   printf("%d\n",iCnt);
   iCnt++;
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