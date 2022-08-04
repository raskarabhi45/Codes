//input 5
//output  1 * 3 * 5 * 
//complexity O(2n)
//1 2 3 4  5 6  counter
//1 * 3 * 5 *  output
#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
       if(i%2==0)
        {
            printf("*\t");
        }
        else{
           printf("%d\t",i);
        }
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