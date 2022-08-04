#include<stdio.h>
/*
mostly use while loop.........
*  *  *  *

*/

void DisplayI()  //Iterative approach
{
    auto int cnt=0;

    while(cnt<4)
    {
        printf("*\t");
        cnt++;
    }
}

void DisplayR()   //Recursive  approach
{
    static int cnt=0;
    if(cnt<4)
    {
        printf("*\t");
        cnt++;
        DisplayR();  //Recursive call
    }

}

int main()
{
    //DisplayI();

    DisplayR();

    return 0;
}