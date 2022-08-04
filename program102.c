/*input  row=4   column =4
with optimization

output  
* 
* *
* * *
* * * *


 
complexity 
*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0;
    if(iRow!=iCol)
{
    printf("Invalid input\n");
    return;
}

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=i;j++)   //.....only change here
        {
    if((i>=j))
        {
            printf("*\t");
        }
        }
         printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Please enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Please enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}