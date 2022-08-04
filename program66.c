//Array call by address
#include<stdio.h>

void Display(int ptr[])  //here change only  ptr is pointer not an array
{
    int iCnt=0;
    printf("Elements of array are :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",*(ptr+iCnt));       //4

    } 
}

int main()
{
    auto int Arr[5];
    register int iCnt=0;

    printf("Enter elements :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);    //Display(100)  base address of array
    return 0;
}