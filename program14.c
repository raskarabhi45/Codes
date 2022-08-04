//program to display 5 times Hello on screen
#include<stdio.h>

 void Display(int n)   //functiom defination
{
    int iCnt=0;

    for (iCnt=0;iCnt<n;iCnt++)
    {
           printf("Hello\n");  
    }
}
int main()
{
    int n;
    printf("Enter how many times you  want to display\n");
    scanf("%d",&n);

    Display(n);   //function call
   
    return 0;
}