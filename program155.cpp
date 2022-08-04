//Accpet String from user
//count number of white spaces
/*
Enter String
Always do what you are afraid to do
String contains spaces 7 times
*/


#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str==' '))     // ASCII value 32
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int main()
{
    char Arr[50];
    int ret=0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,50);           //getline method

    ret=CountSmall(Arr);
    cout<<"String contains spaces "<<ret<<" times"<<endl;

    return 0;
}

