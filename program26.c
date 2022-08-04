/*
0 to 35    fail
35 to 50     pass class
50 to 60     second class
60 to 70      first class
70 to 100    first class with distinction

becoz of range we cant convert this code in switch case
*/
#include<stdio.h>

void DisplayClass(float fMarks)
{
    if(fMarks>=70 && fMarks<100)
    {
        printf("First class with distinction\n");
    }

    else if(fMarks>=60 && fMarks<70)
    {
        printf("first class\n");
    }

     else if(fMarks>=50 && fMarks<60)
    {
        printf("second class\n");
    }

     else if(fMarks>=35 && fMarks<70)
    {
        printf("pass class\n");
    }

     else if( fMarks>0 && fMarks<35)
    {
        printf("you are fail\n");
    }
    else
    {
        printf("Invalid marks\n");
    }
}

int main()
{
    float fValue=0.0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}