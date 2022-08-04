//input 5
//output  5 * 4 * 3 * 2 * 1 *
//complexity O(n)
#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=iNo;i>0;i--)
    {
        printf("%d\t*\t",i);
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