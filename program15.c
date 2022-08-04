//program to display 5 times Hello on screen
#include<stdio.h>

 void Display(int iNo)   //functiom defination
{
    int iCnt=0;
    if (iNo<0)   //filter
        {
       printf("Please enter positive value\n");

       return ;

        }

    for (iCnt=0;iCnt<iNo;iCnt++)
    {
        
           printf("Hello\n");  
    }
}
int main()
{
    int iValue=0;
    printf("Enter how many times you  want to display\n");
    scanf("%d",&iValue);

    Display(iValue);   //function call
   
    return 0;
}