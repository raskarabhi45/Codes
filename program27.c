//Gold coin switch case

#include<stdio.h>

void JwelersPortal(int iGram)
{
switch(iGram)
{
case 1:
    printf("Your bill amount is 4000\n");
    break;

case 2:
    printf("Your bill amount is 8000");
    break;

case 5:
    printf("Your bill amount is 20000");
    break;

case 10:
    printf("Your bill amount is 40000");
    break;

default:
printf("Invalid weight\n");
}
}


int main()
{
    int iValue=0;

    printf("Enter the gold coin that you want to purchase\n");
    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}