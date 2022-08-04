//toggle the case of that string
/*
Enter String
aBHI rASKAR
String afer toggle Abhi Raskar
*/


#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //getline method

    strtoggleX(Arr);
    cout<<"String afer toggle "<<Arr<<endl;

    return 0;
}

