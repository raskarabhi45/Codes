//Forward backward looping
#include<stdio.h>

void DisplayF(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%d\n",i);
    }
}

void DisplayB(int iNo)
{
    int i=0;
    for(i=iNo;i>=1;i--)
    {
        printf("%d\n",i);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    printf("Forward Display\n");
    DisplayF(iValue);
    printf("Backward Display\n");
    DisplayB(iValue);

   return 0;
   
}
