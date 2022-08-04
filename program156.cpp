//Accpet String from user
//count number of vowels
/*
Enter String
Do it now sometimes later becomes never
String contains vowels 7 times
*/


#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int cnt=0;
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='i')||(*str=='e')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='I')||(*str=='E')||(*str=='O')||(*str=='U'))     // ASCII value 32
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
    cout<<"String contains vowels "<<ret<<" times"<<endl;

    return 0;
}

