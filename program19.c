//program to display 1-5 on screen
//output 1 2 3 4 5 
#include<stdio.h>

void display()
{
    int iCnt=0;
    for(iCnt=1;iCnt<5;iCnt++)
    {
   printf("%d\n",iCnt);
    }
}

int main()
{
    display();

    return 0;
}