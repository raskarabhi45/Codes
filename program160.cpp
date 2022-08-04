//Reverse the string
/*
Enter String
My Thinking
String afer reverse gniknihT yM 
*/


#include<iostream>
using namespace std;

void strrevX(char *str)
{
    char *start=str;
    char *end=str;
    char temp;

    while(*end!='\0') //we dont know length of string hence use this loop compulsory
    {
        end++;
    }
    end--;
    while(start<end)
    {
        temp=*start;      //swapping logic
        *start=*end;
        *end=temp;

        start++;
        end--;

    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //getline method

    strrevX(Arr);
    cout<<"String afer reverse "<<Arr<<endl;

    return 0;
}

