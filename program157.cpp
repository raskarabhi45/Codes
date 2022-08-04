//if letter is capital then make letters small
/*
Enter String
Abhi Raskar
String in lower case abhi raskar
*/


#include<iostream>
using namespace std;

void strlwrX(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //getline method

    strlwrX(Arr);
    cout<<"String in lower case "<<Arr<<endl;

    return 0;
}

