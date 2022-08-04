//input 5
//output  5 4 3 2 1
#include<stdio.h>

void Display(int iNo)
{
    int i=0;
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

//complexity n