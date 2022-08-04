#include<stdio.h>
/*
head recursion................
mostly use while loop.........
123

3  2  1

*/

void DisplayI(int no)  //Iterative approach
{
    while(no!=0)
    {
        printf("%d\t",no%10);
        no=no/10;
        
    }
}

void DisplayR(int no)   //Recursive  approach
{
    if(no!=0)
    {
        no=no/10;
        DisplayR(no);   //recursive call
        printf("%d\t",no%10);
    }
}

int main()
{
    //DisplayI(123);

    DisplayR(123);

    return 0;
}