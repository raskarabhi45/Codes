//if letter is capital then make letters in lowercase to upper case
/*
Enter String
Abhi Raskar
String in upper case ABHI RASKAR
*/


#include<iostream>
using namespace std;

void struprX(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
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

    struprX(Arr);
    cout<<"String in upper case "<<Arr<<endl;

    return 0;
}

