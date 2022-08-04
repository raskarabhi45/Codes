 //Accpet String from user
//count number of Capital Characteristics
/*
Using ascii values.....
Enter String
aBHIsHEK rAskAr
String contains capital letters 8 times
*/


#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str>=65)&&(*str<=90))
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

    ret=CountCapital(Arr);
    cout<<"String contains capital letters "<<ret<<" times"<<endl;

    return 0;
}

