//Accpet String from user
//count number of small Characteristics
/*
Enter String
AbhiShek RASKAR
String contains small letters 6 times
*/


#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))     // ASCII value 97 to 122
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int main()
{
    char Arr[20];
    int ret=0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //getline method

    ret=CountSmall(Arr);
    cout<<"String contains small letters "<<ret<<" times"<<endl;

    return 0;
}

