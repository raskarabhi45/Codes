//input 4
//output 1 2 3 4 4 3 2 1
#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
    for(i=iNo;i>=1;i--)
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