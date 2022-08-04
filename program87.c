//printing Number line
//input 4
//output  -4 -3 -2 -1 0 1 2 3 4
//complexity O(2n)
#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=-iNo;i<=iNo;i++)
    {
        printf("%d\t",i);
    }

    
}
int main()
{
    int iValue=0;

    printf("Please enter value:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}